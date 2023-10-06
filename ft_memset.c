/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edribeir <edribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:25:18 by edribeir          #+#    #+#             */
/*   Updated: 2023/10/05 14:08:21 by edribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int c, unsigned int n)
{
    char *p = str; // for work with individual bytes
    int i;
    i = 0;
  while(i < n)
  {
    p[i] = c;
    i++;
  } 
  return str;
}

int main()
{
    char s[] = "Little String";
    int t = '0';
    int num = 3;
    
    ft_memset(s, t, num);
    printf("%s", s);
}
// s = "hello word"
// int = 65;
// size_t = 3;

// "AAAlo World"