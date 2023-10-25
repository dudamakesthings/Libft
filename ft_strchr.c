/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 16:45:20 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/25 15:46:29 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char str[] = "ana";
//     int ch = 'n';
//     printf("new frase: %s", ft_strchr(str, ch));
// }

//(char *)&str[i] works with (char *)str;