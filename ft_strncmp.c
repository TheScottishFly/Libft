/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ls.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: grosnet- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/10 16:01:22 by grosnet-     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/24 12:10:36 by grosnet-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i]
			&& s1[i] && s2[i] && i < n - 1)
		i++;
	if (n > 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}
