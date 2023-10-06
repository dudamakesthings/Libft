/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:06:03 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/03 13:50:49 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii (unsigned char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}


int main()
{
	char t;
	int m;
	m = 255;
	printf("with is not in ascii: %d", ft_isascii(m));

	char T;
	t = 'A';
	printf("\nwith is not in ascii: %d", ft_isascii(t));
}