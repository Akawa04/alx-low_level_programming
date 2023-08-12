#include <stdio.h>
/**
 * main - Entry parameters
 * Description:This program prints all possible
 * different combinations of two digits.
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar('0');
			putchar('0');
			putchar(' ');
			putchar('0' + a);
			putchar('0' + b);
			if (a != 9 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}