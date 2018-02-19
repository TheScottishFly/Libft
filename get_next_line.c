/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/07 09:27:19 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/14 05:15:56 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

static t_fd	*get_t_fd(t_fd **first_fd, int fd)
{
	t_fd	*tfd;

	tfd = *first_fd;
	while (tfd && tfd->fd != fd)
		tfd = tfd->next;
	if (!tfd)
	{
		if ((tfd = (t_fd *)malloc(sizeof(t_fd))))
		{
			if (!(tfd->buf = ft_strnew(BUFF_SIZE)))
			{
				free(tfd);
				return (NULL);
			}
			tfd->fd = fd;
			tfd->next = *first_fd;
			*first_fd = tfd;
			return (tfd);
		}
	}
	else
		return (tfd);
	return (NULL);
}

static int	ft_split_buf(char **buf, char **line, int *ret)
{
	int		i;
	char	*tmp;

	i = 0;
	*ret = 0;
	tmp = NULL;
	free(*line);
	if (ft_strlen(*buf) > 1)
		*ret = 1;
	while ((*buf)[i] && (*buf)[i] != '\n')
		i++;
	if (!(*line = ft_strsub(*buf, 0, i)))
		return (0);
	(*line)[i] = '\0';
	if ((*buf)[i] == '\n')
		i++;
	if (!(tmp = ft_strsub(*buf, i, ft_strlen(*buf) - i)))
		return (0);
	free(*buf);
	*buf = tmp;
	return (1);
}

int			get_next_line(int fd, char **line)
{
	static t_fd		*first;
	t_fd			*tfd;
	int				i;
	int				ret;

	i = 1;
	tfd = NULL;
	if (BUFF_SIZE < 1 || !line || fd < 0 || !(tfd = get_t_fd(&first, fd)) ||
			!(*line = ft_strnew(BUFF_SIZE)))
		return (-1);
	if (!ft_memchr(tfd->buf, '\n', ft_strlen(tfd->buf)))
	{
		while ((i = read(fd, *line, BUFF_SIZE)) > 0)
		{
			if (!(ft_realloc(&(tfd->buf), ft_strlen(tfd->buf), BUFF_SIZE)))
				return (-1);
			(*line)[i] = '\0';
			ft_strncat(tfd->buf, *line, BUFF_SIZE);
			if (ft_memchr(*line, '\n', BUFF_SIZE))
				break ;
		}
	}
	if (!ft_split_buf(&(tfd->buf), line, &ret) || i == -1)
		return (-1);
	return (i ? 1 : ret);
}
