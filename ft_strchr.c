/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:45:20 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/04 18:35:30 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(char *str, int c)
{
    int i;
    i = 0;
    if(str[i] == '\0')
        return NULL;
    while(str[i] != '\0')
    {
        if(str[i] == c)
            return &str[i];
        i++;
    }
    return &str[i];
}

int main()
{
    char str[] = "ana";
    int ch = 'n';
    
    printf("new frase: %s", ft_strchr(str, ch));
}