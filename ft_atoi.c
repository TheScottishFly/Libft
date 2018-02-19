/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:22:59 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:23:49 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	atoi_error(const char *str)
{
	int len;

	len = 0;
	while (ft_isdigit(*str++))
		len++;
	if (len > 18)
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		error;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (!ft_isdigit(*str))
	{
		if (*str == '-')
			sign = -1;
		else if (*str != '+')
			return (0);
		str++;
	}
	error = atoi_error(str);
	while (ft_isdigit(*str))
		result = result * 10 + (*str++ - '0');
	result *= sign;
	if (error && result < 0)
		return (-1);
	else if (error)
		return (0);
	return (result);
}
