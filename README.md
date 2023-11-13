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
|[``ft_isascii``](https://github.com/dudamakesthings/Libft/blob/main/ft_isascii.c)| Tests if a given character, in the current locale, can be represented as a valid 7–bit US-ASCII character.|        
|[``ft_isprint``](https://github.com/dudamakesthings/Libft/blob/main/ft_isprint.c)| Checks whether a character is a printable character.|          
|[``ft_isalpha``](https://github.com/dudamakesthings/Libft/blob/main/ft_isalpha.c)| Checks if the passed character is alphabetic.|
|[``ft_isdigit``](https://github.com/dudamakesthings/Libft/blob/main/ft_isdigit.c)| Checks if the passed character is a decimal digit character.|
|[``ft_isalnum``](https://github.com/dudamakesthings/Libft/blob/main/ft_isalnum.c)| Checks if the passed character is alphanumeric.|
|[``ft_tolower``](https://github.com/dudamakesthings/Libft/blob/main/ft_tolower.c)| Converts a given letter to lowercase.|
|[``ft_toupper``](https://github.com/dudamakesthings/Libft/blob/main/ft_toupper.c)| Converts a given letter to uppercase.|
|[``ft_strlen``](https://github.com/dudamakesthings/Libft/blob/main/ft_strlen.c)| Computes the length of the string str up to, but not including the terminating null character.|
|[``ft_strchr``](https://github.com/dudamakesthings/Libft/blob/main/ft_strchr.c)| Searches for first occurrence of ``c`` in the string ``*str``.|
|[``ft_strrchr``](https://github.com/dudamakesthings/Libft/blob/main/ft_strrchr.c)| Searches for the last occurrence of the character ``c`` (an unsigned char) in the string pointed to, by the argument ``str``.|
|[``ft_strnstr``](https://github.com/dudamakesthings/Libft/blob/main/ft_strnstr.c)| Locates the first occurrence of the null-terminated string pointed by ``little`` in string pointed by ``big``. Characters that appear after a ``'\0'`` or ``len`` are not searched.|
|[``ft_strncmp``](https://github.com/dudamakesthings/Libft/blob/main/ft_strncmp.c)| Compares at most the first ``n`` bytes of ``str1`` and ``str2``.|
|[``ft_strlcpy``](https://github.com/dudamakesthings/Libft/blob/main/ft_strlcpy.c)| Copies up to ``size - 1`` characters from the NUL-terminated string ``src`` to ``dest``, NUL-terminating the result.|
|[``ft_strlcat``](https://github.com/dudamakesthings/Libft/blob/main/ft_strlcat.c)| Appends the NUL-terminated string ``src`` to the end of ``dest``. It will append at most ``size - strlen(dst) - 1 bytes``, NUL-terminating the result.|
|[``ft_strdup``](https://github.com/dudamakesthings/Libft/blob/main/ft_strdup.c)| Returns a pointer to a new string duplicated of the string ``s``. Memory for the new string is obtained with malloc.|
|[``ft_atoi``](https://github.com/dudamakesthings/Libft/blob/main/ft_atoi.c)| Converts the initial portion of the string pointed to by ``str`` to int.|
|_Memory Functions_ 
|[``ft_memset``](https://github.com/dudamakesthings/Libft/blob/main/ft_memset.c)| Fills memory with a constant byte.|
|[``ft_bzero``](https://github.com/dudamakesthings/Libft/blob/main/ft_bzero.c)| Copies ``n`` bytes, each with a value of zero, into string ``s``.|
|[``ft_memcpy``](https://github.com/dudamakesthings/Libft/blob/main/ft_memcpy.c)| Copies ``n`` bytes from memory area ``src`` to memory area ``dest``. The memory areas must not overlap. Use ``ft_memmove`` if the memory areas overlap.|
|[``ft_memmove``](https://github.com/dudamakesthings/Libft/blob/main/ft_memmove.c)| Copies ``n`` bytes from memory area ``src`` to memory area ``dest`` and will not be corrupted if memory areas overlap.|
|[``ft_memchr``](https://github.com/dudamakesthings/Libft/blob/main/ft_memchr.c)| Searches within the first ``n`` bytes of the block of memory pointed by ``str`` for the first occurrence of ``c`` (interpreted as an unsigned char), and returns a pointer to it.|
|[``ft_memcmp``](https://github.com/dudamakesthings/Libft/blob/main/ft_memcmp.c)| Compares ``n`` byte string s1 against ``n`` byte string s2.|
|[``ft_calloc``](https://github.com/dudamakesthings/Libft/blob/main/ft_calloc.c)| Allocates ``size`` bytes and returns a pointer to the allocated memory. The memory is not initialized.|

#### Additional functions from the mandatory part

| function | description |
|--|--|
|[``ft_substr``](https://github.com/dudamakesthings/Libft/blob/main/ft_substr.c)| Allocates (with malloc) and returns a substring from the string ``s``. The substring begins at index ``start`` and is of maximum size ``len``.| 
|[``ft_strjoin``](https://github.com/dudamakesthings/Libft/blob/main/ft_strjoin.c)| Allocates (with malloc) and returns a new string, which is the result of the concatenation of ``s1`` and ``s2``.|
|[``ft_strtrim``](https://github.com/dudamakesthings/Libft/blob/main/ft_strtrim.c)| Allocates (with malloc) and returns a copy of ``s1`` with the characters specified in ``set`` removed from the beginning and the end of the string.|
|[``ft_split``](https://github.com/dudamakesthings/Libft/blob/main/ft_split.c)| Allocates (with malloc) and returns an array of strings obtained by splitting ``s`` using the character ``c`` as a delimiter. The array must blended by a NULL pointer.|
|[``ft_itoa``](https://github.com/dudamakesthings/Libft/blob/main/ft_itoa.c)| Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled.|
|[``ft_strmapi``](https://github.com/dudamakesthings/Libft/blob/main/ft_strmapi.c)| Applies the function ``f`` to each character of the string ``s`` to create a new string (with malloc) resulting from successive applications of ``f``.|
|[``ft_striteri``](https://github.com/dudamakesthings/Libft/blob/main/ft_striteri.c)| Applies the function ``f`` to each character of the string passed as an argument and passes its index as the first argument. Each character is passed by address to ``f`` to be modified if necessary.|
|_Print Functions_
|[``ft_putchar_fd``](https://github.com/dudamakesthings/Libft/blob/main/ft_putchar_fd.c)| Outputs the character ``c`` to the given file descriptor.|
|[``ft_putstr_fd``](https://github.com/dudamakesthings/Libft/blob/main/ft_putstr_fd.c)| Outputs the string ``s`` to the given file descriptor.|
|[``ft_putendl_fd``](https://github.com/dudamakesthings/Libft/blob/main/ft_putendl_fd.c)| Outputs the string ``s`` to the given file descriptor, followed by a new line.|
|[``ft_putnbr_fd``](https://github.com/dudamakesthings/Libft/blob/main/ft_putnbr_fd.c)| Outputs the integer ``n`` to the given file descriptor.|

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

