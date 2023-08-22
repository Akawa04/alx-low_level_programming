#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a new line.
 *
 * This function takes a pointer to a null-terminated string and
 * prints the second half of the string (or the last n characters if the
 * length is odd), followed by a new line.
 *
 * @str: Pointer to the input string.
 */

void puts_half(char *str)
{
    int length = strlen(str);
    int start;

    if (length % 2 == 0)
    {
        start = length / 2; 
    }
    else
    {
        start = (length - 1) / 2; 
    }

    while (str[start] != '\0')
    {
        putchar(str[start]); 
        start++;
    }

    putchar('\n');
}
