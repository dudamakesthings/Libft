/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:12:22 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/26 11:53:03 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t nbytes)
{
	unsigned char	*buffer;
	size_t			i;

	buffer = (unsigned char *)s;
	i = 0;
	while (buffer[i] != '\0' && (i < nbytes))
	{
		if (buffer[i] == (unsigned char)c)
			return (&buffer[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char str[] = "MmARIA";
//     const char ch = 'A';
    
//     char *m = ft_memchr(str, ch, 3);
//     printf("%s", m);
// }