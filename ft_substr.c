/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 09:04:32 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/16 11:13:42 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h> // size_t lib > unsigned  integer  type capable of storing values in the range [0, SIZE_MAX].
#include <stdlib.h>

unsigned int ft_strlcpy(char *dst, const char *src, unsigned int size)
{
    int i;
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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t src_len;
    char *substr;
    int i;
    i = 0;
    
    if(s[i] == '\0')
        return (0);
    src_len = ft_strlen(s);
    if(start > src_len)
        return (0);
    if(src_len - start >= len)
        substr = (char*)malloc((len + 1) * sizeof(char));
    else
        substr = (char *)malloc((src_len - start + 1) * sizeof(char));
    if(substr == 0)
        return (0);
    ft_strlcpy(substr,(&s[start]), len + 1);
    return (substr);
        
    
}

int main()
{
    char str[] = "A";
    // char str[] = "Codam is a really nice place";
    char *m = ft_substr(str, 3, 40);
    printf("%s\n", m);
}