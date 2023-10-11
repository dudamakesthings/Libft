/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 09:51:50 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/11 11:20:41 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h> // compile using -lbsd

char *ft_strnstr(const char *big, const char *little, unsigned int len)
{
    unsigned int i;
    unsigned int j;
    i = 0;
    
    if (little[i] == '\0')
        return (char *)big;
    
    while(big[i] != '\0' && i < len)
    {   
        j = 0;
        while(big[i + j] == little[j] && (i +j) < len)
        {
            if(little[i] != '\0')
                return (char *)&big[i];
            j++;
        }
        i++;   
    }
    return NULL;
}

int main()
{
    char *largestring = "Foo Bar Baz";
    char *smallstring = "BBar";
    char *ptr;
    char *ptr1;

    ptr = ft_strnstr(largestring, smallstring, 5);

    printf("%s", ptr);
    
    ptr1 = strnstr(largestring, smallstring, 5);

    printf("\n%s", ptr1);

}