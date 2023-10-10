/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:08:33 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/06 09:56:39 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, unsigned int n)
{
    //first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
    char *pdest = dest;
    const char *psrc = src;
    char temp[n]; // allocate memory for the temp array not supost to be an pointer
    int i;
    i = 0;
    while(i < n)
    {
        temp[i] = psrc[i];
        i++;
    }
    i = 0;
    while(i < n)
    {
        pdest[i] = temp[i];
        i++;
    }
    return (dest);
}

int main()
{
    char source[] = {1, 2, 3, 4, 6};
    char destin[8];
    
   ft_memmove(destin, source, 3);
      
    int j = 0;
    while (destin[j])
        printf("%d", destin[j++]);
}
