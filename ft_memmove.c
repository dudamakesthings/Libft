/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 09:08:33 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/26 10:12:57 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t nbytes)
{
	size_t	i;
	char	*pdst;
	char	*psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	if (dst <= src)
	{
		while (nbytes > i)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (nbytes > 0)
		{
			pdst[nbytes - 1] = psrc[nbytes - 1];
			nbytes--;
		}
	}
	return (dst);
}

int main()
{
    // char source[] = {1, 2, 3, 4, 6};
    // char destin[8];
	char source[] = {1, 2, 3, 4, 6};
    char destin[] = {0, 0, 0};
	
   char *m = ft_memmove(destin, source, 3);
      
    int j = 0;
    while (destin[j])
        printf("%d", m[j++]);
}
