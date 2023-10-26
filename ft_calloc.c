/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 15:18:50 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/26 19:07:52 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

//calloc() is a function that assigns a specified number of blocks of memory to a single variable.


void ft_bzero(void *str, unsigned int n)
{
    char *p = str;
    unsigned int i;
    i = 0;
    while(i < n)
    {
        p[i] = 0;
        i++;
    }
}

void *ft_calloc(unsigned int nitems, unsigned int sizeitem)
{
    void *dest;

    dest = (void *)malloc(nitems * sizeitem);
    if(dest == NULL)
        return NULL;
    ft_bzero(dest, nitems * sizeitem);
    return (dest);
}

// int main()
// {
//     unsigned int i = 0;
//     unsigned int nmemb = 3;

//     int *numbers;
//     numbers =(int *)ft_calloc(nmemb, sizeof(int));
//     while(i < nmemb)
//     {
//         printf("%i", numbers[i]);
//         i++;
//     }
//     free(numbers); // to free calloc in the end of use
// }