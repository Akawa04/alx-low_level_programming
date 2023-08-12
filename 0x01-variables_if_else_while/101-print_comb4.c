#include <stdio.h>
/**
 * main - Entry parameters
 * Description:This program prints all possible
 * different combinations of two digits.
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a < b)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + v);
					if (a != 7 || b != 8 || c!= 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}	
	}
	putchar('\n');
        return (0);
}
