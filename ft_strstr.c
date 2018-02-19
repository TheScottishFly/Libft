/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:28:52 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:28:53 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*begin;
	char	*begin_tf;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		begin = (char *)haystack;
		begin_tf = (char *)needle;
		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!(*needle))
			return (begin);
		else
		{
			haystack = begin;
			needle = begin_tf;
		}
		haystack++;
	}
	return (0);
}
