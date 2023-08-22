#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *
 * This function takes two pointers to integers and swaps the values they point to.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;       
    *b = temp;    
}
