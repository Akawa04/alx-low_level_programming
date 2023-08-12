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
			if (a < b)
			{
				putchar('1' + a);
				putchar('1' + b);
				if (a != 8 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
