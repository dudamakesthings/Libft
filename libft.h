/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 12:31:26 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/24 20:08:27 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// standard functions
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stddef.h> 
# include <bsd/string.h> 
# include <limits.h>
# include <unistd.h>

// Character Function
// int		ft_toupper(int c);
// int		ft_tolower(int c);

// // String functions
// char	*ft_substr(char const *s, unsigned int start, size_t len);
// char	*ft_strtrim(char const *s1, char const *set);
// char	*ft_strrchr(const char *str, int ch);
// char	*ft_strnstr(const char *big, const char *little, size_t len);
// int		ft_strncmp(const char *str, const char *str1, size_t n);
// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// size_t	ft_strlen(const char *str);
// size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
// char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, int c);



#endif
