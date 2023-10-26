/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:28:14 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/26 18:56:13 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, s);
		i++;
	}
}

// void tester(unsigned int index, char *c)
// {
// 	c[index] = ft_toupper(c[index]);
// }

// int main()
// {
// 	char s[] = "hello";
//     ft_striteri(s, &tester);
//     printf("%s", s);
// }