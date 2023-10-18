/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 10:42:31 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/18 16:04:27 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
unsigned int ft_strlcpy(char *dst, const char *src, unsigned int size)
{
    unsigned int i;
    i = 0;
    while(i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return i;
}

unsigned int ft_strlen (const char *str)
{   
    unsigned int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t src_len;
    char *substr;
    int i;
    i = 0;
    
    if(s[i] == '\0')
        return (NULL);
    src_len = ft_strlen(s);
    if(start > src_len)
        return (NULL);
    if(src_len - start >= len)
        substr = (char*)malloc((len + 1) * sizeof(char));
    else
        substr = (char *)malloc((src_len - start + 1) * sizeof(char));
    if(substr == NULL)
        return (NULL);
    ft_strlcpy(substr,(&s[start]), len + 1);
    return (substr);
}

static char **ft_free(char **array_str)
{
    int word;
    word = 0;
    while(array_str[word]) //when it is a string different than null, free every word first
    {
        free(array_str[word]);
        word++;
    }
    free(array_str); // free the space of all the substr
    return (NULL);
}

//The ft_split function splits a string into an array of substrings based on a delimiter character.
static int ft_get_words(char const *s, char c) // static because it is just used in this function
{
    unsigned int words;
    int i;
    i = 0;
    words = 0;

    while(s[i] != '\0')
    {
        if(s[i] == c)
            i++;
        else
        {
            words++;
            while(s[i] != '\0' && s[i] != c)
                i++;
        } 
    }
    return(words);
}
// ft_get_words count how many "words" existe in the string when the separator works
char **ft_split(char const *s, char c)
{
    char **array_str;
    int wordstart;
    size_t word_len;
    int i;
    int word;
    word = 0;
    i = 0;

    if(s[i] == '\0')
        return (NULL);
    array_str = (char **)malloc((ft_get_words(s,c) + 1) * sizeof(char *));
    if(array_str == NULL)
        return NULL;
    while(s[i] != '\0')
    {
        if(s[i] == c)
            i++;
        else
        {
            wordstart = i;
            while(s[i] != '\0' && s[i] != c)
                i++;
            word_len = (size_t)(i - wordstart);
            array_str[word] = ft_substr(s, wordstart, word_len);
            if(array_str[word] == NULL)
                return(ft_free(array_str));
            word++;
        }
    }
    array_str[word] = NULL;
    return (array_str);
}

int main()
{
    int i;
    // char str[] = "";
    char str[] = "Hello Human Coder";
    char c = ' ';

    i = 0;
    // printf("%d\n", ft_get_words(str, c));
    char **m = ft_split(str, c);
    if (ft_split(str, c) == NULL) //test when it is a null 
    {
        printf("%s\n", "Null");
    }
    while(m[i])
    {
        printf("%s\n", m[i]);
        i++;
    }
    
}