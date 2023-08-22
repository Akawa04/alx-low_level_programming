#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * This function takes a pointer to a null-terminated string and
 * reverses the characters in place.
 *
 * @s: Pointer to the input string.
 */
void rev_string(char *s)
{
    int length = strlen(s);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
       
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

      
        start++;
        end--;
    }
}
