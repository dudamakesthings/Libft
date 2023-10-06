/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:28:43 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/05 11:52:33 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_bzero(void *str, unsigned int n)
{
    char *p = str;
    int i;
    i = 0;
    while(i < n)
    {
        p[i] = 0;
        i++;
    }
}

int main()
{
    char s[] = "ABCDE55444368";
    int num = 3;

    ft_bzero(s, num);
    printf("%s", (s + 3));
}