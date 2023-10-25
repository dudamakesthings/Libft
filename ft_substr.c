/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 09:04:32 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/25 17:18:49 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	src_len;
	char	*substr;
	int		i;

	i = 0;
	if (s[i] == '\0')
		return (0);
	src_len = ft_strlen(s);
	if (start > src_len)
		return (0);
	if (src_len - start >= len)
		substr = (char *)malloc((len + 1) * sizeof(char));
	else
		substr = (char *)malloc((src_len - start + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy (substr, (&s[start]), len + 1);
	return (substr);
}

// int main()
// {
//     // char str[] = "A";
//     char str[] = "Codam is a really nice place";
//     char *m = ft_substr(str, 3, 40);
//     printf("%s\n", m);
// }