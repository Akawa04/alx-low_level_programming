#include "main.h"

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
        putchar(*str); // Print the current character
        str++;         // Move the pointer to the next character
    }

    putchar('\n'); // Print a new line character
}

