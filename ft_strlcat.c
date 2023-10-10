/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 16:44:12 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/09 11:10:13 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h> // functions from BSD systems -lbsd
#include <stdio.h>

unsigned int ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
    int i;
    int i2;
    i= 0;
    i2 = 0;
    while(dst[i] != '\0')
         i++;
    while((src[i2] != '\0') && (i < dstsize - 1))
    {
        dst[i] = src[i2];
        i++;
        i2++;
    }
     dst[i] = '\0';
     return i;
}

int main()
{
    char source[] = "Catnip";
    char dest[] = "Whiskas Sache";
    
    ft_strlcat(dest, source, 5);
    printf("%s", dest);
    strlcat(dest, source, 5);
    printf("\n%s", dest);
    
}
