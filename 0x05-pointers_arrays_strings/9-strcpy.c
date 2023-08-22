#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 *
 * This function copies the string from the source buffer to the destination buffer,
 * including the terminating null byte (\0).
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * @return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
    char *original_dest = dest;

    while (*src != '\0')
    {
        *dest = *src; 
        dest++;      
        src++;        
    }

    *dest = '\0'; 

    return original_dest; 
}
