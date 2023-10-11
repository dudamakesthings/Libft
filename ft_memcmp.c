/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 17:32:56 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/11 09:56:33 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// The  memcmp()  function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
int ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
    unsigned char *buff1 = (unsigned char *)str1;
    unsigned char *buff2 = (unsigned char *)str2;
    unsigned int i;
    i = 0;

    while((i < n))
    {
        if(buff1[i] != buff2[i])
            return (buff1[i] - buff2[i]);
        i++;
    }
    return (0);
    
}

int main()
{
    char str[] = "world";
    char str_1[] = "worello";
    // char str[] = "2234567";
    // char str_1[] = "822222";
    int result = ft_memcmp(str, str_1, 3);
    printf("%d", result);
    int resul2 = memcmp(str, str_1, 3);
    printf("%d", resul2);
}