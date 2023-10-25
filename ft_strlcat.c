/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 16:44:12 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/25 14:26:00 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ft_strlen(dst);
	while ((src[j] != '\0') && (i < dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i);
}

// int main()
// {
//     char source[] = "Catnip";
//     char dest[] = "Whiskas Sache";
//     ft_strlcat(dest, source, 30);
//     printf("%s", dest);
//     strlcat(dest, source, 5); // compile with -lbsd
//     printf("\n%s", dest);
// }
