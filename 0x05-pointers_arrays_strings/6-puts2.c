#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string, starting with the first character.
 *
 * This function takes a pointer to a null-terminated string and
 * prints every other character of the string, starting with the first character,
 * followed by a new line.
 *
 * @str: Pointer to the input string.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]); 
        i += 2; 
    }

    putchar('\n');
}
