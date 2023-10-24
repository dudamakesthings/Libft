/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 09:55:32 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/24 09:59:02 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    while(s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}

// int main()
// {
//     ft_putstr_fd("banana", 1);
// }