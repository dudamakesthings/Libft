/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:12:22 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/10 14:23:41 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

//The memchr() function is used to search the first n bytes of buf for the first occurrence of c converted to an unsigned character.
void *ft_memchr (const void *src, int c, unsigned int n)
{
    unsigned char *buffer = (unsigned char *)src; //need to be unsigned char
    unsigned char pc = (unsigned char)c;
    unsigned int i;
    i = 0;

    while(buffer[i] != '\0' && i < n)
    {    if(buffer[i] == pc)
            return &buffer[i];         
        i++;
    }
    return NULL;
}
int main()
{
    const char str[] = "MmARIA";
    const char ch = 'A';
    
    char *m = ft_memchr(str, ch, 3);
    printf("%s", m);
}