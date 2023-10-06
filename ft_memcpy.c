/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:48 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/06 09:34:50 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
    char *pdest = dest;
    const char *psrc = src;
    int i;
    i = 0;
    while(i < n)
    {    
        pdest[i] = psrc[i];
        i++;
    }
    return (dest); 
}

int main()
{
    char source[] = {1, 2, 3, 4, 6};
    char destin[8];
    
   ft_memcpy(destin, source, 3);
    // printf("%s\n", destin);
    // ft_memcpy(destin, source, 3);
    // printf("%s\n", destin);
    
    int j = 0;
    while (destin[j])
        printf("%d", destin[j++]);
}