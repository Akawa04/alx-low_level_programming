#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 * This function takes a pointer to a null-terminated string and
 * prints the string characters in reverse order followed by a new line.
 *
 * @s: Pointer to the input string.
 */
void print_rev(char *s)
{
    int i ,length = 0;

   
    while (*s != '\0')
    {
        length++;
        s++;
    }
    for ( i = length - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }
    putchar('\n'); 
}
