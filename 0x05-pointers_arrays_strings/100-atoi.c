#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * This function converts the string pointed to by 's' to an integer.
 * It takes into account leading spaces and optional '+' or '-' signs.
 * If there are no numbers in the string, it returns 0.
 *
 * @s: Pointer to the input string.
 * @return: The converted integer.
 */
int _atoi(char *s)
{
    int INT_MAX,sign = 1; 
    int result = 0;

    
    while (*s == ' ')
    {
        s++;
    }

    
    if (*s == '-' || *s == '+')
    {
        if (*s == '-')
        {
            sign = -1;
        }
        s++;
    }

    
    while (*s >= '0' && *s <= '9')
    {
       
        if (result > (INT_MAX - (*s - '0')) / 10)
        {
            
            if (sign == 1)
            {
                return INT_MAX;
            }
            else
            {
                return INT_MIN;
            }
        }

        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
