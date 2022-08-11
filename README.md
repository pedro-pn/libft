# libft
My very first own library (first 42 school project).

## Description
This project is a C library with some reimplementation of some C standard library functions and new functions to help with the 42 school projects. As the first project, it helps the student to understand some C concepts, like pointers, strings, arrays and memory allocation.

## The library

### Functions from [<c_type.h>](https://www.man7.org/linux/man-pages/man0/ctype.h.0p.html)

> - [`ft_isalpha`](https://github.com/pedro-pn/libft/blob/master/ft_isalpha.c) - Checks whether a given character is an alphabetic character.
> - [`ft_isdigit`](https://github.com/pedro-pn/libft/blob/master/ft_isdigit.c) - Checks whether a given character is a digit.
> - [`ft_isalnum`](https://github.com/pedro-pn/libft/blob/master/ft_isalnum.c) - Checks whether a given character is an alphabetic character or a digit.
> - [`ft_isascii`](https://github.com/pedro-pn/libft/blob/master/ft_isascii.c) - Checks whether a given character is an [ASCII](https://www.ascii-code.com/) character (0–127).
> - [`ft_isprint`](https://github.com/pedro-pn/libft/blob/master/ft_isprint.c) - Checks whether a given character is an [ASCII](https://www.ascii-code.com/) printable character (32–126).
> - [`ft_toupper`](https://github.com/pedro-pn/libft/blob/master/ft_toupper.c) - Returns the uppercase given character if it is a lowercase alphabetic character.
> - [`ft_tolower`](https://github.com/pedro-pn/libft/blob/master/ft_tolower.c) - Returns the lowercase given character if it is an uppercase alphabetic character.

### Functions from [<string.h>](https://man7.org/linux/man-pages/man3/string.3.html)

> - [`ft_bzero`](https://github.com/pedro-pn/libft/blob/master/ft_bzero.c) - Fills the first n bytes of a given memory area with 0.
> - [`ft_memset`](https://github.com/pedro-pn/libft/blob/master/ft_memset.c) - Fills the first n bytes of a given memory area with the specified byte.
> - [`ft_memcpy`](https://github.com/pedro-pn/libft/blob/master/ft_memcpy.c) - Copies the first n bytes from a given memory area to another one. The given memory areas must not overlap.
> - [`ft_memmove`](https://github.com/pedro-pn/libft/blob/master/ft_memmove.c) - Copies the first n bytes from a given memory area to another one. The given memory areas may overlap.
> - [`ft_memchr`](https://github.com/pedro-pn/libft/blob/master/ft_memchr.c) - Checks whether a specified character is present in the first n bytes of a given memory area.
> - [`ft_memcmp`](https://github.com/pedro-pn/libft/blob/master/ft_memcmp.c) - Compares the first n bytes of the two given memory areas.
> - [`ft_strlen`](https://github.com/pedro-pn/libft/blob/master/ft_strlen.c) - Calculates the length of a given string, excluding the '\0' byte.
> - [`ft_strlcpy`](https://github.com/pedro-pn/libft/blob/master/ft_strlcpy.c) - Copies a given string to another one and it terminates adding a '\0' byte.
> - [`ft_strlcat`](https://github.com/pedro-pn/libft/blob/master/ft_strlcat.c) - Concatenates a given string to another one and it terminates adding a '\0' byte.
> - [`ft_strchr`](https://github.com/pedro-pn/libft/blob/master/ft_strchr.c) - Checks whether a specified character is present in a given string.
> - [`ft_strrchr`](https://github.com/pedro-pn/libft/blob/master/ft_strrchr.c) - Checks whether a specified character is present in a given string.
> - [`ft_strncmp`](https://github.com/pedro-pn/libft/blob/master/ft_strncmp.c) - Compares the first n bytes of two given strings.
> - [`ft_strntr`](https://github.com/pedro-pn/libft/blob/master/ft_strnstr.c) - This function search for a specified pattern inside a given string up to len bytes.
> - [`ft_strdup`](https://github.com/pedro-pn/libft/blob/master/ft_strdup.c) - Copies a given string to a new allocated memory area. The memory is obtained with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) and can be freed with [free(3)](https://man7.org/linux/man-pages/man3/free.3p.html).

### Function from [<stdlib.h>](https://man7.org/linux/man-pages/man0/stdlib.h.0p.html)

> - [`ft_atoi`](https://github.com/pedro-pn/libft/blob/master/ft_atoi.c) - Converts the first portion of a given string into an integer.
> - [`ft_calloc`](https://github.com/pedro-pn/libft/blob/master/ft_calloc.c) - Allocates an specified number of bytes in heap memory and set all allocated bytes to 0.

### Addtional functions (bonus)

> - [`ft_substr`](https://github.com/pedro-pn/libft/blob/master/ft_substr.c) - Allocates with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) and returns a substring from a given string.
> - [`ft_strjoin`](https://github.com/pedro-pn/libft/blob/master/ft_strjoin.c) - Allocates with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) and returns a new string, which is the result of the concatenation of two given strings.
> - [`ft_strtrim`](https://github.com/pedro-pn/libft/blob/master/ft_strtrim.c) - Allocates with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) and returns a copy of a given string with the specified characters removed from the beginning and the end of the string.
> - [`ft_split`](https://github.com/pedro-pn/libft/blob/master/ft_split.c) - Allocates with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) and returns an array of strings obtained by splitting a given string using the specified character as a delimiter.
> - [`ft_itoa`](https://github.com/pedro-pn/libft/blob/master/ft_itoa.c) - Allocates with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) and returns a string representing the integer received as an argument.
> - [`ft_strmapi`](https://github.com/pedro-pn/libft/blob/master/ft_strmapi.c) - Applies a given function to each character of a string, and passing its index as first argument to create a new string with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) resulting from successive applications of the given function.
> - [`ft_striteri`](https://github.com/pedro-pn/libft/blob/master/ft_iteri.c) - Applies a given function on each character of the string passed as argument, passing its index as first argument.
> - [`ft_putchar_fd`](https://github.com/pedro-pn/libft/blob/master/ft_putchar_fd.c) - Outputs a specified character to the given file descriptor.
> - [`ft_putstr_fd`](https://github.com/pedro-pn/libft/blob/master/ft_putstr_fd.c) - Outputs a string to the given file descriptor.
> - [`ft_putendl_fd`](https://github.com/pedro-pn/libft/blob/master/ft_putendl_fd.c) - Outputs a string to the given file descriptor followed by a newline.
> - [`ft_putnbr_fd`](https://github.com/pedro-pn/libft/blob/master/ft_putnbr_fd.c) - Outputs the an specified integer to the given file descriptor.

### Linked list functions

libft has its own linked list data structure which is define in the [`header`](https://github.com/pedro-pn/libft/blob/master/libft.h) file as follows:
```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
```
The following functions are handy to deal with the t_list type.

> - [`ft_lstnew`]() - Allocates with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) and returns a new node of t_list.
> - [`ft_lstadd_front`]() - Adds the node 'new' at the beginning of a t_list.
> - [`ft_lstadd_back`]() - Adds the node 'new' at the end of a t_list.
> - [`ft_lstsize`]() - Counts the number of nodes in a t_list.
> - [`ft_lstlast`]() - Returns the last node of a t_list.
> - [`ft_lstdelone`]() - Deletes a node of a t_list and it frees its content.
> - [`ft_lstclear`]() - Deletes and frees the given node and every successor of that node.
> - [`ft_lstiter`]() - Iterates a t_list and applies a given function on the content of each node.
> - [`ft_lstmap`]() - Iterates a t_list and applies a given function on the content of each node. Creates a new t_list resulting of the successive applications of the given function.

### Extra functions

> - [`ft_atoi_base`]() - Converts the first portion of a string into an integer. The portion to be converted of str may be in any given base, since base does not contain repeated characteres and the '+' '-' symbols.
> - [`ft_utoa`]() - Allocates with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) and returns a string representing the unsigned integer received as an argument.
> - [`ft_memrpl`]() - Replaces every ocurrence of a given character with another in the first n bytes of a memory area.
> - [`ft_strrpl`]() - Allocates with [malloc(3)](https://man7.org/linux/man-pages/man3/malloc.3.html) a new string which is a copy of a given string with every occurence of a given character replaced with another.

## Usage

### Requirements

libft requires gcc compiler and standard c libraries.

### Compilation

Clone this repository in your project folder:

	$> git clone https://github.com/pedro-pn/libft

Run `make` command in the repository folder:

	$> make

Make supports the following rules:

> - `make`/`make all` - compile the library;
> - `make bonus` - compile the bonus functions;
> - `make clean` - remove all objects (`.o`) files;
> - `make fclean` - perform `clean` and also remove the library (`libft.a`);
> - `make re` - perform `fclean` and `all` recompiling the library.

### Use

Once compiled, the library `libft.a` or `libft_bonus.a` is generated in the repository folder. You need to include the header `libft.h` in your project to be able to use libft functions:

```c
#include "libft.h"
```

To compile libft with your project, use the flag `-L. -lft`. The header file `libft.h` must be given to compiler with the flag `-I`. Example:

	$> gcc myproject.c -I path/to/header/ -L. -lft
