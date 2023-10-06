/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:12:55 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/03 16:35:50 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

char ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return c;

}

int main() 
{
    char c;

    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));

    c = 'e';
    printf("\n%c -> %c", c, ft_toupper(c));

    c = 'E';
    printf("\n%c -> %c", c, ft_toupper(c));

    c = '0';
    printf("\n%c -> %c", c, ft_toupper(c));
}