#include "main.h"

/**
 * -puts - Prints a string followed by a new line to stdout
 * @str: The string to print
 */

void -puts(char *str)

{
	while (*str != '\0')
      	{
        -putchar(*str++);
	}
	-putchar('\n');
}
