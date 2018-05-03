# Printf
A recreation of the functionality of the C standard library function printf.

### Environment
This project was written and tested on the Ubuntu 14.04 operating system.

### Repository Contents

|   **File** | **Description** |
| -------- | ----------------- |
|  \_printf.c		       |	Main function for the printf string formatter |
|  \_putchar.c 		       | 	An implementation of the C standard library function putchar.c |
|   c\_print 		       |	Function to print a single ASCII character |
|    d\_print |		       Function to print an integer |
|    holberton.h | Header files |
|  r\_print.c | A function to print a string in reverse |
|  s\_print.c | A function to print a string |

### Function Descriptions
|   **Function** |	**Description**	|
| -------------- | -------------------- |
| int. \_printf(const char \*format, ...) | Print a formatted string |
| \_putchar(char c) | Write a char to stdout |
| int c\_print(va\_list ap) | Print a single char within the format string |
| int d\_print(va\_list ap)| Print an integer within the format string |
| int r\_print(va\_list ap) | Print a string in reverse within the format string |
| int specifier(const char \*format, va\_list ap, int i) | Process the modification declared by specifier |
| int \_strlen(char *s) | Returns the length of a string |
| int s\_print(va\_list ap) | Prints a string within the format string |

### How to Install
[Clone the repo](https://github.com/jagrvargen/printf.git)

### Compilation
` $ gcc -Wall -Wextra -Werror -pedantic -Wno-format holberton.h *.c -o print `

#### Example Code
```
int main(void)
{
		_printf("This is an example %s", "sentence");
			      return (0);
}
```

### Format Specifiers
| **Specifier** | **Type** |
| -------------- | --------- |
| %b | binary |
|    %c | char |
| %d | int |
| %r | reversed string |
| %s | string |

### Authors
* [**Jesse Hedden**](https://github.com/jagrvargen)
* [**Darnell Garvey**](https://github.com/tragic86)
