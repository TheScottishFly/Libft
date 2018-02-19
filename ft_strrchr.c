/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:28:37 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:28:38 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last;

	last = NULL;
	while (*s)
	{
		if (!ft_isascii(*s))
			return (NULL);
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (c == '\0')
		last = (char *)s;
	return (last);
}
