/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 09:16:18 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/25 12:14:13 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (NULL);
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (i >= 0)
	{
		if (str[i] == (char)ch)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

// int main()
// {
//     char s[20] = "Mariah";
//     int f = 'a';

//     printf("This is the string: %s", strrchr(s, f));
// }