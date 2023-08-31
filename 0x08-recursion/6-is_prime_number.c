#include "main.h"
#include <stdio.h>
/**
 * is_prime_recursive - Helper function to check if @n is prime recursively.
 * @n: The integer to be checked.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
    if (n <= 1)
        return 0;

    if (n == 2)
        return 1;

    if (divisor * divisor > n)
        return 1;

    if (n % divisor == 0)
        return 0;

    return is_prime_recursive(n, divisor + 1);
}
