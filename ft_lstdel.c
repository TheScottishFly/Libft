/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:24:32 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:24:33 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*buf;
	t_list	*next;

	buf = *alst;
	while (buf)
	{
		next = buf->next;
		(*del)(buf->content, buf->content_size);
		free(buf);
		buf = next;
	}
	*alst = NULL;
}
