/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:43:39 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/25 14:25:08 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str, char *str1, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (str[i] != str1[i])
		{
			return (str[i] - str1[i]);
			i++;
		}
		n--;
	}
	return (0);
}

// int main()
// {
//     char a[] = "world";
//     char b[] = "hello";
//     char result = strncmp(a, b, 0);
//     printf("%d", result);
//     char result2 = ft_strncmp(a, b, 0);
//     printf("\n%d", result2);
//     return (0);
// }
