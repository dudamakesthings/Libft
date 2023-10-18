/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 11:20:44 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/16 14:24:15 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

unsigned int ft_strlen (const char *str)
{   
    unsigned int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *newstr;
    size_t len_newstr;
    int i;
    int j;
    i = 0;
    j = 0;
    
    if(s1[i] == '\0' || s2[i] == '\0')
        return (NULL);
    len_newstr =  ft_strlen(s1)+ ft_strlen(s2);
    newstr = (char *)malloc((len_newstr + 1) * sizeof(char));
    if(newstr == 0)
        return (0);
    while(s1[i] != '\0')
    {
        newstr[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while(s2[i] != '\0')
    {
        newstr[j] = s2[i];
        i++;
        j++;
    }
    newstr[j] = '\0';
}

int main()
{
    // char str2[] = "Hello";
    // char str1[] = "";
    char str1[] = "Hello";
    char str2[] = "Sunshine";
    char *m = ft_strjoin(str1, str2);
    printf("%s", m);
}
