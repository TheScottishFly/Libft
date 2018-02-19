/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:28:56 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:28:57 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	int				j;
	char			*cs;

	i = start;
	j = 0;
	cs = (char *)malloc(len + 1);
	if (!cs || !s)
		return (NULL);
	while (i < (start + (unsigned int)len))
		cs[j++] = s[i++];
	cs[j] = '\0';
	return (cs);
}
