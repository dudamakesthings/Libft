/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:28:14 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/27 12:08:56 by edribeir      ########   odam.nl         */
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
		f(i, (s + i));
		i++;
	}
}

// void tester(unsigned int index, char *c)
// {
// 	*c = ft_toupper(*c);
// }

// int main()
// {
// 	char s[] = "hello";
//     ft_striteri(s, &tester);
//     printf("%s", s);
// }