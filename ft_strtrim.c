/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 14:26:06 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/25 09:54:38 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	if ((s1[i] == '\0') || set[i] == '\0')
		return (0);
	end = ft_strlen(s1) - 1;
	while ((ft_strchr(set, s1[start])) && (start <= end))
		start++;
	while ((ft_strchr(set, s1[end])) && (end >= 0))
		end--;
	newstr = (char *)malloc((end - start + 2) * sizeof(char));
	if (newstr == 0)
		return (0);
	ft_strlcpy(newstr, &s1[start], (end - start + 2));
	return (newstr);
}

// int main()
// {
//     char str[] = "MaMaria MariaMa";
//     char set[] = "Ma";
//     char *m = ft_strtrim(str, set);
//     printf("%s", m);
// }
