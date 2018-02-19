/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:28:33 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:28:34 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*begin;
	char	*begin_tf;
	size_t	glen;

	if (!*needle)
		return ((char *)haystack);
	glen = len;
	while (*haystack && glen--)
	{
		begin = (char *)haystack;
		begin_tf = (char *)needle;
		while (*haystack && *needle && len-- && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (begin);
		haystack = begin;
		needle = begin_tf;
		len = glen;
		haystack++;
	}
	return (0);
}
