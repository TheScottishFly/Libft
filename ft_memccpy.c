/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ls.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/10 16:01:22 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/24 12:10:36 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == (unsigned char)c)
			return ((void *)&dest[i + 1]);
		i++;
	}
	return (NULL);
}
