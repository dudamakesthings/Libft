## 📁 Libft Project 

The Libft is the first project that Codam School proposes to the new students. This is the only project in the Rank 0.

### What is this project for?
This project is about coding a C library. It will contain functions that simulate original functions in the standard library of C and some specific functions. 

In total, there are 34 functions in the **mandatory** part and 9 in the **bonus** part. Plus the [**Makefile**](https://github.com/dudamakesthings/Libft/blob/main/Makefile) and the header [**libft.h**](https://github.com/dudamakesthings/Libft/blob/main/libft.h).

---
## 🔒 Mandatory part
#### Standard Libc functions from mandatory part


| Function | Description |
|--|--|
|[``ft_isascii``](https://github.com/dudamakesthings/Libft/blob/main/ft_isascii.c)|tests if a given character, in the current locale, can be represented as a valid 7–bit US-ASCII character.|        
|[``ft_isprint``](https://github.com/dudamakesthings/Libft/blob/main/ft_isprint.c)|checks whether a character is a printable character.|          
|[``ft_isalpha``](https://github.com/dudamakesthings/Libft/blob/main/ft_isalpha.c)|checks if the passed character is alphabetic.|
|[``ft_isdigit``](https://github.com/dudamakesthings/Libft/blob/main/ft_isdigit.c)|checks if the passed character is a decimal digit character.|
|[``ft_isalnum``](https://github.com/dudamakesthings/Libft/blob/main/ft_isalnum.c)|checks if the passed character is alphanumeric.|
|[``ft_tolower``](https://github.com/dudamakesthings/Libft/blob/main/ft_tolower.c)|converts a given letter to lowercase.|
|[``ft_toupper``](https://github.com/dudamakesthings/Libft/blob/main/ft_toupper.c)|converts a given letter to uppercase.|
|[``ft_strlen``](https://github.com/dudamakesthings/Libft/blob/main/ft_strlen.c)|computes the length of the string str up to, but not including the terminating null character.|
|[``ft_strchr``](https://github.com/dudamakesthings/Libft/blob/main/ft_strchr.c)|searches for first occurrence of _c_ in the string _*str_.|
|[``ft_strrchr``](https://github.com/dudamakesthings/Libft/blob/main/ft_strrchr.c)|searches for the last occurrence of the character _c_ (an unsigned char) in the string pointed to, by the argument _str_.|
|[``ft_strnstr``](https://github.com/dudamakesthings/Libft/blob/main/ft_strnstr.c)|locates the first occurrence of the null-terminated string pointed by _little_ in string pointed by _big_. Characters that appear after a _'\0'_ or _len_ are not searched.|
|[``ft_strncmp``](https://github.com/dudamakesthings/Libft/blob/main/ft_strncmp.c)|compares at most the first _n_ bytes of _str1_ and _str2_.|
|[``ft_strlcpy``](https://github.com/dudamakesthings/Libft/blob/main/ft_strlcpy.c)|copies up to _size - 1_ characters from the NUL-terminated string _src_ to _dest_, NUL-terminating the result.|
|[``ft_strlcat``](https://github.com/dudamakesthings/Libft/blob/main/ft_strlcat.c)|appends the NUL-terminated string _src_ to the end of _dest_. It will append at most _size - strlen(dst) - 1 bytes_, NUL-terminating the result.|
|[``ft_strdup``](https://github.com/dudamakesthings/Libft/blob/main/ft_strdup.c)|returns a pointer to a new string duplicated of the string _s_. Memory for the new string is obtained with malloc.|
|[``ft_atoi``](https://github.com/dudamakesthings/Libft/blob/main/ft_atoi.c)|converts the initial portion of the string pointed to by _str_ to int.|
|_Memory Functions_ 
|[``ft_memset``](https://github.com/dudamakesthings/Libft/blob/main/ft_memset.c)|fills memory with a constant byte.|
|[``ft_bzero``](https://github.com/dudamakesthings/Libft/blob/main/ft_bzero.c)|copies _n_ bytes, each with a value of zero, into string _s_.|
|[``ft_memcpy``](https://github.com/dudamakesthings/Libft/blob/main/ft_memcpy.c)|copies _n_ bytes from memory area _src_ to memory area _dest_. The memory areas must not overlap. Use **ft_memmove** if the memory areas overlap.|
|[``ft_memmove``](https://github.com/dudamakesthings/Libft/blob/main/ft_memmove.c)|copies _n_ bytes from memory area _src_ to memory area _dest_ and will not be corrupted if memory areas overlap.|
|[``ft_memchr``](https://github.com/dudamakesthings/Libft/blob/main/ft_memchr.c)|Searches within the first _n_ bytes of the block of memory pointed by _str_ for the first occurrence of _c_ (interpreted as an unsigned char), and returns a pointer to it.|
|[``ft_memcmp``](https://github.com/dudamakesthings/Libft/blob/main/ft_memcmp.c)|compares _n_ byte string s1 against _n_ byte string s2.|
|[``ft_calloc``](https://github.com/dudamakesthings/Libft/blob/main/ft_calloc.c)|allocates _size_ bytes and returns a pointer to the allocated memory. The memory is not initialized.|

#### Additional functions from the mandatory part

| function | description |
|--|--|
|[``ft_substr``](https://github.com/dudamakesthings/Libft/blob/main/ft_substr.c)| allocates (with malloc) and returns a substring from the string _s_. The substring begins at index _start_ and is of maximum size _len_.| 
|[``ft_strjoin``](https://github.com/dudamakesthings/Libft/blob/main/ft_strjoin.c)| allocates (with malloc) and returns a new string, which is the result of the concatenation of _s1_ and _s2_.|
|[``ft_strtrim``](https://github.com/dudamakesthings/Libft/blob/main/ft_strtrim.c)| allocates (with malloc) and returns a copy of _s1_ with the characters specified in _set_ removed from the beginning and the end of the string.|
|[``ft_split``](https://github.com/dudamakesthings/Libft/blob/main/ft_split.c)| allocates (with malloc) and returns an array of strings obtained by splitting _s_ using the character _c_ as a delimiter. The array must blended by a NULL pointer.|
|[``ft_itoa``](https://github.com/dudamakesthings/Libft/blob/main/ft_itoa.c)| allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled.|
|[``ft_strmapi``](https://github.com/dudamakesthings/Libft/blob/main/ft_strmapi.c)| applies the function _f_ to each character of the string _s_ to create a new string (with malloc) resulting from successive applications of _f_.|
|[``ft_striteri``](https://github.com/dudamakesthings/Libft/blob/main/ft_striteri.c)| applies the function _f_ to each character of the string passed as an argument and passes its index as the first argument. Each character is passed by address to f to be modified if necessary.|
|_Print Functions_
|[``ft_putchar_fd``](https://github.com/dudamakesthings/Libft/blob/main/ft_putchar_fd.c)| outputs the character _c_ to the given file descriptor.|
|[``ft_putstr_fd``](https://github.com/dudamakesthings/Libft/blob/main/ft_putstr_fd.c)| outputs the string _s_ to the given file descriptor.|
|[``ft_putendl_fd``](https://github.com/dudamakesthings/Libft/blob/main/ft_putendl_fd.c)| outputs the string _s_ to the given file descriptor, followed by a new line.|
|[``ft_putnbr_fd``](https://github.com/dudamakesthings/Libft/blob/main/ft_putnbr_fd.c)| outputs the integer _n_ to the given file descriptor.|

#### 🌠 Bonus 
| Bonus Function | Description |
| :------------: | :---------: |
| [``ft_lstnew``](https://github.com/dudamakesthings/Libft/blob/main/ft_lstnew.c) | Allocates with malloc and returns a new node. |
| [``ft_lstadd_front``](https://github.com/dudamakesthings/Libft/blob/main/ft_lstadd_front.c) | Adds the node ``new`` at the beginning of the list. |
| [``ft_lstsize``](https://github.com/dudamakesthings/Libft/blob/main/ft_lstsize.c) | Counts the number of nodes in a list. |
| [``ft_lstlast``](https://github.com/dudamakesthings/Libft/blob/main/ft_lstlast.c) | Returns the last node of the list. |
| [``ft_lstadd_back``](https://github.com/dudamakesthings/Libft/blob/main/ft_lstadd_back.c) | Adds the node ``new`` at the end of the list. |
| [``ft_lstdelone``](https://github.com/dudamakesthings/Libft/blob/main/ft_lstdelone.c) | Takes as a parameter a node and frees the memory of the node’s content. The memory of ``next`` must not be freed. |
| [``ft_lstclear``](https://github.com/dudamakesthings/Libft/blob/main/ft_lstclear.c) | Deletes and frees the given node and every successor of that node and sets the pointer to the list with NULL. |
| [``ft_lstiter``](https://github.com/dudamakesthings/Libft/blob/main/ft_lstiter.c) | Iterates the list ``lst`` and applies the function ``f`` on the content of each node. |
| [``ft_lstmap``](https://github.com/dudamakesthings/Libft/blob/main/ft_lstmap.c) | Creates a new list resulting from the successive applications of the function ``f``. Use ``del`` if you need to delete the content. |


---
### 🧪 Testers
To test my project I used two testers, thanks to the creators.
* [Libft Tester - Tripouille](https://github.com/Tripouille/libftTester)

* [Francinette - Xicodomingues](https://github.com/xicodomingues/francinette)

---

### ℹ️ Source
The pdf [Subject](https://cdn.intra.42.fr/pdf/pdf/95631/en.subject.pdf)
