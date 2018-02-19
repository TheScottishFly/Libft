/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnequ.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:28:22 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:28:23 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *str1, char const *str2, size_t n)
{
	if (str1 && str2 && ft_strncmp(str1, str2, n) == 0)
		return (1);
	else
		return (0);
}
