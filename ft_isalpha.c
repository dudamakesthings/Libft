/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:42:06 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/03 12:12:57 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

// int main()
// {
//     char c;
    
//     c = 'T';
//     printf ("Result when is upper case: %d", isalpha(c));

//     c = 't';
//     printf("\nResult when is lowercase: %d", isalpha(c));

//     c= '+';
//     printf("\nResult when is non-alphabetic: %d", isalpha(c));

//     return 0;

// }

int ft_isalpha(char c)
{
    if ((c >= 'A' && c <= 'Z'))
        return 1;
    if ((c >= 'a' && c <= 'z'))
        return 2;
    else
    return 0;
}

int main()
{
    char c;
    // int c;
    c = 'T';
    // c = 65;
    printf ("Result when is upper case: %d", ft_isalpha(c));

    c = 't';
    printf("\nResult when is lowercase: %d", ft_isalpha(c));

    c= '+';
    printf("\nResult when is non-alphabetic: %d", ft_isalpha(c));
}