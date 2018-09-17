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

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	int				end;

	if (!s)
		return (NULL);
	start = 0;
	end = (int)ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n') &&
			s[start])
		start++;
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') && s[end] &&
			end > (int)start)
		end--;
	return (ft_strsub(s, start, (end - start + 1)));
}
