/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_find.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 09:34:47 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 11:34:09 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *buf;

	buf = begin_list;
	while (buf != NULL && !(*cmp)(buf->content, data_ref))
	{
		buf = buf->next;
	}
	return (buf);
}
