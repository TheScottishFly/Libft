/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 13:55:38 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/14 05:14:51 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 32

typedef struct		s_fd
{
	int				fd;
	char			*buf;
	struct s_fd		*next;
}					t_fd;

int					get_next_line(const int fd, char **line);

#endif
