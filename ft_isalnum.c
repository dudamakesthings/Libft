/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:40:53 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/03 13:03:50 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isalnum (char c)
{
    if( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}      

int main()
{
    char c;
    int result;

    c = '5';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = ')';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

}