/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 11:39:26 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/19 16:25:07 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
unsigned int ft_strlen (const char *str)
{   
    unsigned int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    char *newstr;
    int i;
    i = 0;
    
    if( s == NULL || f == NULL)
        return (NULL);
    newstr = (char *)malloc(ft_strlen(s) * sizeof(char));
    if( newstr == NULL)
        return NULL;
    while(s[i] != '\0')
    {
        newstr[i] = f(i, s[i]);
        i++;
    }
    newstr[i] = '\0';
    return (newstr);
}

char tester(unsigned int i, char c) // necessary to create a function to the pointer points
{   
    return (i + c);
}
   
int main()
{
    char *f = ft_strmapi("000", tester); // output 48, 49, 50
    printf("%s", f);
}