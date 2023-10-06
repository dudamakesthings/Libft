/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:16:18 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/05 10:02:10 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strrchr(char str[], int ch)
{
    int i;
    i = 0;
    
    if(str[i] == '\0')
        return NULL;
    while(str[i] != '\0')
        i++;
    i = i - 1;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        return &str[i];
        i--;
    }
    return NULL;
}

int main()
{
    char s[20] = "Mariah";
    int f = 'a';

    printf("This is the string: %s", strrchr(s, f));
}