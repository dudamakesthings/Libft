/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:03:06 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/03 15:24:42 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlen (const char *str)
{   
    unsigned int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

int main()
{
    char a[20]="Progam";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %d \n",ft_strlen(a));
    printf("Length of string b = %d \n",ft_strlen(b));

    return 0;
}
