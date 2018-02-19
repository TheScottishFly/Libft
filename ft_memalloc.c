/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:25:05 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:25:08 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char			*buf;
	unsigned long	i;

	buf = malloc(size);
	i = 0;
	if (!buf)
		return (NULL);
	while (i < size)
	{
		buf[i] = 0;
		i++;
	}
	return ((void *)buf);
}
