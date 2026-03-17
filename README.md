*This project has been created as part of the 42 curriculum by ecantu-p.*

## - Description
This project aims to clarify how C's standard functions work by implementing the user own version. And in the process learn to use these functions effectively.

The goal is to create the user own library called *libft*.
This libarary is split in tree sections:
### 1.  Libc fucntions
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncpm
- memchr
- memcmp
- strnstr
- atoi

### 2. Additional functions to *libc*
-   ft_substr

    Allocates memory and returns a substring from the strin's.  The substring starts at index 'star' and has a maximum of lenght of 'len'.

- ft_strjoin

    Allocates memory and returns a new string, which is the result of concatenating 's1' and 's2'.

- ft_strtrim

    Allocates memory and returns a copy of 's1' whith characters from 'set' removed from the beginning and the end.

- ft_split

    Allocates memory and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. The array must end with a NULL pointer.

- ft_itoa

    Allocates memory and returns a string representing the integer received as an argument. Negative numbers must be handled. 

- ft_strmapi

    Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created to store the results from the successive applications of f.

- ft_striteri

    Applies the function 'f' to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to 'f' so it can be modified if necessary.

- ft_putchar_fd

    Outputs the character 'c' to the specified file descriptor.

- ft_putstr_fd

    Outputs the string ’s’ to the specified file descriptor.

- ft_putendl_fd

    Outputs the string ’s’ to the specified file descriptor followed by a newline.

- ft_putnbr_fc

    Outputs the integer ’n’ to the specified file descriptor.


### 3. Linked list functions
- ft_lstnew

    Allocates memory (using malloc) and returns a new node. The ’content’ member variable is initialized with the given parameter ’content’. The variable ’next’ is initialized to NULL.

- ft_lstadd_front

    Adds the node ’new’ at the beginning of the list.

- ft_lstsize

    Counts the number of nodes in the list.

- ft_lstlast

    Returns the last node of the list.

- ft_lastadd_back
    
    Adds the node ’new’ at the end of the list.

- ft_lstdelone
    
    Takes a node as parameter and frees its content using the function ’del’. Free the node itself but does NOT free the next node.

- ft_lstclear

    Deletes and frees the given node and all its successors, using the function ’del’ and free. Finally, set the pointer to the list to NULL.

- ft_lstiter

    Iterates through the list ’lst’ and applies the function ’f’ to the content of each node.


- ft_lstmap

    Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.

## - Instructions
    
There is a Make file to build the library. The folloging rules are available to build the library:
    *all*, *clean*, *fclean* and *re*.
    
make *all*: Builds the library form 0.

make *clean*: Removes the object files.

make *fclean*: Removes additional to *clean* the static library file.

make *re*: Runs *clean* and rebuilds the library.

The user *libc* functions described in *Section 1* have the prefix *'ft'*.  Other functions name is as described in sections 2 and 3.

## - Resources
 - Function library manual: <https://linux.die.net/man/3/>
 - Reese, Richard M. Understanding and using C pointers: Core techniques for memory management. " O'Reilly Media, Inc.", 2013.
 - Visual Aid.
    <https://www.pythontutor.com>
 - ASCII table
     <https://https://en.cppreference.com/w/c/language/ascii.html>
 - Variable types:
     <https://https://en.cppreference.com/w/c/language/compatible_type.html>
     <https://https://www.w3schools.com/c/c_variables.php>
-   Conditions:
    <https://www.w3schools.com/c/c_conditions.php>
