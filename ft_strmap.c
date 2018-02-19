/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:27:58 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:27:59 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		length;
	char	*str;

	i = 0;
	length = 0;
	str = NULL;
	if (s && f)
	{
		while (s[length])
			length++;
		str = (char *)malloc(length + 1);
		if (!str)
			return (NULL);
		while (s[i])
		{
			str[i] = (*f)(s[i]);
			i++;
		}
		str[i] = 0;
	}
	return (str);
}
