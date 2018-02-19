/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:24:15 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:24:16 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countchars(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	ft_isneg(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				i;
	int				sign;
	unsigned int	p;

	sign = ft_isneg(n);
	i = 0;
	p = n;
	str = (char *)malloc(ft_countchars(n) + 1);
	if (!str)
		return (NULL);
	if (sign == 1)
		p = -n;
	if (p == 0)
		str[i++] = '0';
	while (p > 0)
	{
		str[i++] = p % 10 + '0';
		p /= 10;
	}
	if (sign == 1)
		str[i++] = '-';
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}
