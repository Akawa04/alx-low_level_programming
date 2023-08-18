#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using '\'
 * @n: The number of times the character '\' should be printed
 */


void print_square(int size)
{
	int i,j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}
