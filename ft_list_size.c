/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_size.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:24:19 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:24:21 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*buf;

	i = 0;
	buf = begin_list;
	if (buf == NULL)
		return (0);
	else
		i = 1;
	while (buf->next)
	{
		i++;
		buf = buf->next;
	}
	return (i);
}
