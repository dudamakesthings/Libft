/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 14:26:06 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/16 18:16:34 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

char *ft_strchr(const char *str, int c)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] == c)
            return (char *)&str[i]; // works with (char *)str; too
        i++;
    }
    return NULL;
}

unsigned int ft_strlen(const char *str)
{   
    unsigned int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *newstr;
    int start;
    int end;
    int i;
    i = 0;
    start = 0;

    if((s1[i] == '\0') || set[i] == '\0')
        return (0);
    end = ft_strlen(s1) - 1; // -1 because the null terminator 
    while((ft_strchr(set, s1[start])) && (start <= end)) //look for the first index in the beggining s1 out the set
        start++;
    while((ft_strchr(set, s1[end])) && (end >= 0)) // look for the first index in the end out of the set
        end--;  
    newstr = (char *)malloc((end - start + 2) * sizeof(char));
    if(newstr == 0)
        return (0);
    ft_strlcpy(newstr, &s1[start], (end - start + 2)); // two because is 1 for the null terminator and 1 for the zero
    return(newstr);
}

int main()
{
    char str[] = "MaMaria MariaMa";
    char set[] = "Ma";
    char *m = ft_strtrim(str, set);
    printf("%s", m);
}
