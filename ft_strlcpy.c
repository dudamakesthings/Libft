/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 10:00:18 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/06 16:39:36 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

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
int main()
{
    char source[] = "hello";
    char dest[6] = "Maria";
    ft_strlcpy(dest, source, 6); //the last number should be the size of destination.
    printf("%s", dest);
}