/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:28:48 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:28:49 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			j++;
		i++;
	}
	return (j);
}

static char	*position_next_word(char const *str, char c, int s)
{
	if (s)
		while (*str && *str == c)
			str++;
	else
		while (*str && *str != c)
			str++;
	return ((char *)str);
}

static char	**ft_tabdel(char **tab, int len)
{
	int i;

	i = 0;
	while (i < len)
		free(tab[i++]);
	free(tab);
	return (NULL);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*next;
	int		i;

	if (s == NULL)
		return (NULL);
	tab = (char**)malloc(sizeof(char*) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		s = position_next_word(s, c, 1);
		if (*s)
		{
			next = position_next_word(s, c, 0);
			tab[i] = ft_strsub(s, 0, next - s);
			if (tab[i] == NULL)
				return (ft_tabdel(tab, i));
			i++;
			s = next;
		}
	}
	tab[i] = NULL;
	return (tab);
}
