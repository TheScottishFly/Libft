/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_realloc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/16 07:52:28 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/16 07:52:29 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_realloc(char **s1, size_t n)
{
	char	*s2;

	if (!(s2 = ft_strnew(ft_strlen(*s1))))
		return (0);
	ft_strcpy(s2, *s1);
	free(*s1);
	if (!(*s1 = ft_strnew(ft_strlen(s2) + n)))
		return (0);
	ft_strcpy(*s1, s2);
	free(s2);
	return (1);
}
