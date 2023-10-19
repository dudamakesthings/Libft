/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 15:00:21 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/19 11:30:15 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Allocates (with malloc(3)) and returns a string
//representing the integer received as an argument.
//Negative numbers must be handled.
static int nb_size(int nb)
{
    int len;
    len = 0;
    if(nb <= 0) // for count the sign
    {   
        len++; 
    }
    while(nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}
char *ft_itoa(int n)
{
    char *str;
    long int nb; //need to be long because of the int_max and int_min
    int count;
     
    nb = n;
    count = nb_size(nb);
    str = (char *)malloc((count + 1) * sizeof(char)); // +1 for the null terminator
    if(str == NULL)
        return (NULL);
    str[count] = '\0';
    if(nb == 0)
    {
        str[0] = '0'; // = 48
        return (str); 
    }
    if(nb < 0)
    {
        str[0] = '-';
        nb = nb * (-1); // change into a pos number
    }
    while(nb > 0)
    {
        count--; // need this because the space in position, the 0 space
        str[count] = (nb % 10) + '0';
        // printf("%c\n", str[count-1]);
        nb = nb / 10;
       
    }
    // printf("%c %c\n", str[0], str[1]);
    return (str);
}

int main()
{
    
    // printf("%s\n", ft_itoa(-3251));
    printf("%s\n", ft_itoa(1234));
    // char *m = ft_itoa(number);
    printf("%s\n", ft_itoa(INT_MAX));
    // printf("%s", ft_itoa(INT_MIN));
    printf("%s", ft_itoa(2147483648));
    // printf("%d\n", INT_MAX); //2147483647
    // printf("%d", INT_MIN); // -2147483648
}