/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:28:14 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/24 19:48:15 by edribeir      ########   odam.nl         */
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
		f(i, &s[i]);
		i++;
	}
}
// void tester(unsigned int i, char* c)
// {   
//     i--;
//     if(c[0] >= 'a' && c[0] <= 'z')
//         c = c - 32;
//     printf("%s", c);
// }
// int main()
// {
//     char f[] = "CODAM";
//     ft_striteri(f, tester);
// }