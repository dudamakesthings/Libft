/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:43:39 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/09 18:07:06 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(char *str, char *str1, unsigned int n)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (n == 0)
        return (0);
    while (n > 0)
    {
        if (str[i] != str1[j])
        {
            return (str[i] - str1[j]);
            i++;
            j++;
        }
    }
    return (0);
}

int main()
{
    char a[] = "world";
    char b[] = "hello";
    // printf("first string: %s, second string %s\n result %d","Maria","Joao", strncmp("Maria", "Joao",1));
    char result = strncmp(a, b, 0);
    
    printf("%d", result);
    char result2 = ft_strncmp(a, b, 0);
    printf("\n%d", result2);
    return (0);
}