#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * This function takes a pointer to a null-terminated string and
 * returns the length of the string (excluding the null terminator).
 *
 * @s: Pointer to the input string.
 * @return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}
