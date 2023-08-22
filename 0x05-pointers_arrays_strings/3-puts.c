#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string followed by a new line.
 *
 * This function takes a pointer to a null-terminated string and
 * prints the string characters followed by a new line.
 *
 * @str: Pointer to the input string.
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
	str++;
    }

    putchar('\n');
}

