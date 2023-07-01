# Libft

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		| ft_capitalize 
bzero		| ft_memdel		| ft_lstdelone	| ft_countwords 
memcpy		| ft_strnew		| ft_lstdel		| ft_islower    
memccpy		| ft_strdel		| ft_lstadd		| ft_isupper    
memmove		| ft_strclr		| ft_lstiter	| ft_strndup    
memchr		| ft_striter	| ft_lstmap		| ft_lst_reverse
memcmp		| ft_striteri	| | ft_realloc
strlen		| ft_strmap		| | ft_strjoinch
strdup		| ft_strmapi	| | ft_strnchr
strcpy		| ft_strequ		| | ft_copyuntil
strncpy		| ft_strnequ	| | ft_strstartswith
strcat		| ft_strsub		| | ft_intlen
strlcat		| ft_strjoin	| | ft_strendswith
strchr		| ft_strtrim	| | ft_pathjoin
strrchr		| ft_strsplit	| | ft_lstaddback
strstr		| ft_itoa		| | get_next_line
strnstr		| ft_putchar	| | ft_putnstr
strcmp		| ft_putstr		| | ft_strreplace
strncmp		| ft_putendl	| | ft_isemptystr
atoi		| ft_putnbr		| | ft_strsplitall
isalpha		| ft_putchar_fd	| | ft_countwordsall
isdigit		| ft_putstr_fd	| | ft_freestrarr
isalnum		| ft_putendl_fd	| | ft_strjoincl
isascii		| ft_putnbr_fd	| | ft_strjoinchcl
isprint		| | | ft_count2darray
toupper		| | | ft_strarrmax
tolower		| | | ft_get_parent_path


Libc functions | Descriptions 
:----------- | :-----------
• isalpha	|	alphabetic character test
• isdigit	|	decimal-digit character test
• isalnum	|	alphanumeric character test
• isascii	|	tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.
• isprint	|	tests for any printing character, including space (‘ ’)
• strlen	|	find length of string
• memset	|	fill a byte string with a byte value
• bzero		|	writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
• memcpy	|	copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.
• memmove	|	copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
• toupper	|	lower case to upper case letter conversion
• tolower	|	upper case to lower case letter conversion
• strchr	|	the strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
• strrchr	|	is identical to strchr(), except it locates the last occurrence of c.
• strncmp	|	compare strings - not more than n characters.
• memchr	|	locates the first occurrence of c (converted to an unsigned char) in string s.
• memcmp	|	 compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
• strnstr	|	locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.
• atoi		|	convert ASCII string to integer.
• calloc	|	contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero.
• strdup	|	allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.
