/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 14:12:48 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/26 11:25:14 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t nbytes)
{
	size_t	i;

	i = 0;
	while (i < nbytes)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

// int main()
// {
//     char source[] = {1, 2, 3, 4, 6};
//     char destin[8];
//    ft_memcpy(destin, source, 3);
//     // printf("%s\n", destin);
//     // ft_memcpy(destin, source, 3);
//     // printf("%s\n", destin);
//     int j = 0;
//     while (destin[j])
//         printf("%d", destin[j++]);
// }