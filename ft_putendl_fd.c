/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 10:09:04 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/24 10:20:10 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    if(s != NULL)
    {
            while(s[i] != '\0')
        {
            write(fd, &s[i], 1);
            i++;
        }
    }
}
void ft_putendl_fd(char *s, int fd)
{
    if(s != NULL)
    {
        ft_putstr_fd(s, fd);
        write(fd, "\n", 1);
    }
}

// int main()
// {
//     ft_putendl_fd("banana", 1);
//     ft_putendl_fd("", 1);
// }