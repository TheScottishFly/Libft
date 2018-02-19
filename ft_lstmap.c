/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:24:53 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:24:54 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*item;
	t_list	*begin;

	item = (*f)(lst);
	begin = item;
	if (!item)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		item->next = (*f)(lst);
		if (item->next == NULL)
			return (NULL);
		item = item->next;
	}
	return (begin);
}
