#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: This program generates a random number and then determines
 * the last digit of that number. It then prints whether the last digit is
 * greater than 5, equal to 0, or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, rest;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rest = n % 10;
	if (rest > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rest);
	}
	else if (rest == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rest);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rest);
	}
	return (0);
}
