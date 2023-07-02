# Libft

## Libc functions

Functions | Descriptions 
:----------- | :-----------
isalpha	|	alphabetic character test
isdigit	|	decimal-digit character test
isalnum	|	alphanumeric character test
isascii	|	tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.
isprint	|	tests for any printing character, including space (‘ ’)
strlen	|	find length of string
memset	|	fill a byte string with a byte value
bzero		|	writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
memcpy	|	copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.
memmove	|	copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
toupper	|	lower case to upper case letter conversion
tolower	|	upper case to lower case letter conversion
strchr	|	the strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
strrchr	|	is identical to strchr(), except it locates the last occurrence of c.
strncmp	|	compare strings - not more than n characters.
memchr	|	locates the first occurrence of c (converted to an unsigned char) in string s.
memcmp	|	 compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
strnstr	|	locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.
atoi		|	convert ASCII string to integer.
calloc	|	contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.
strdup	|	allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.

## Part 2 - Additional functions

Functions | Descriptions 
:----------- | :-----------
ft_substr 		| Allocates (with malloc(3)) and returns substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
ft_strjoin 		| Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
ft_strtrim 		| Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string
ft_split 		| Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.  The array must end with a NULL pointer.
ft_itoa 		| Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
ft_strmapi 		| Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
ft_striteri 	| Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument.  Each character is passed by address to ’f’ to be modified if necessary.
ft_putchar_fd 	| Outputs the character ’c’ to the given file descriptor.
ft_putstr_fd 	| Outputs the string ’s’ to the given file descriptor.
ft_putendl_fd 	| Outputs the string ’s’ to the given file descriptor followed by a newline.
ft_putnbr_fd 	| Outputs the integer ’n’ to the given file descriptor.

## Bonus part









