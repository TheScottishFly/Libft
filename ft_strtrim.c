/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:29:00 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:29:01 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_custom(char const *s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (*s)
	{
		if (*s != ' ' && *s != '\n' && *s != '\t')
			j = i;
		s++;
		i++;
	}
	return (j);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*cs;

	if (!s)
		return (NULL);
	i = ft_strlen_custom(s);
	j = 0;
	k = 0;
	cs = (char *)malloc(i + 2);
	if (!cs)
		return (NULL);
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j++;
	while (k <= i)
		cs[k++] = s[j++];
	cs[k] = '\0';
	return (cs);
}
