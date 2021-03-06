/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_abs.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/14 05:43:09 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/14 05:43:11 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

double		ft_abs(double nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	else
		return (nbr);
}
