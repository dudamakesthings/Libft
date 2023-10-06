/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:58:57 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/03 14:08:15 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isprint (char c)
{
    if(c >= 32 && c <= 127)
        return 1;
    else
        return 0;
}



int main()
{
    char c;

    c = '\n';
    printf("Result when a printable character %c is passed to isprint(): %d", c, ft_isprint(c));

    c = '\\';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, ft_isprint(c));

}