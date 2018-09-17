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

char	*ft_strdup(const char *s)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (copy == NULL)
		return (NULL);
	else
		copy = ft_strcpy(copy, s);
	return (copy);
}
