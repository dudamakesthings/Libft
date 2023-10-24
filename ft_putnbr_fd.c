/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 10:23:35 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/24 11:47:36 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if(n < 0)
    {
        ft_putchar_fd('-', 1);
        n = n * -1;
    }
    if(n >= 0 && n <= 9)
    {
        n = n + '0';
        ft_putchar_fd(n, fd);
    }
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
}

// int main()
// {
//     // ft_putnbr_fd(INT_MAX, 1);
//     // ft_putnbr_fd(120, 1);
//     // ft_putnbr_fd(INT_MIN,1);
//     ft_putnbr_fd(-125, 1);
    
// }