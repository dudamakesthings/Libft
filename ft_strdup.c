/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/13 10:37:43 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/13 11:40:22 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int ft_strlcpy(char *dst, const char *src, unsigned int size)
{
    unsigned int i;
    i = 0;
    while(i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return i;
}

unsigned int ft_strlen (const char *str)
{   
    unsigned int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

char *ft_strdup(const char *str)
{
    int i;
    int len;
    char *dup;
    i = 0;
    
    if(str == NULL)
        return NULL;
    len = ft_strlen(str) + 1;
    dup = malloc(len);
    ft_strlcpy(dup, str, len);
    return (dup);
    
}

int main()
{
    char s[] = "Codam Coder";
    char *t = ft_strdup(s);
    printf("%s", s);
}