/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:25:40 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:25:42 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_byte	*cdst;
	t_byte	*csrc;
	t_byte	*tmp;

	cdst = (t_byte *)dst;
	csrc = (t_byte *)src;
	tmp = (t_byte *)malloc(len);
	ft_memcpy(tmp, csrc, len);
	ft_memcpy(cdst, tmp, len);
	free(tmp);
	return (dst);
}
