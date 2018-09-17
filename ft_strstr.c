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

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (to_find[i])
		i++;
	if (i == 0)
		return ((char *)str);
	while (str[k])
	{
		while (to_find[j] == str[k + j])
		{
			if (j == i - 1)
				return ((char *)(str + k));
			j++;
		}
		j = 0;
		k++;
	}
	return (0);
}
