#include "main.h"

void print_diagonal(int n)
{
	int i,j;
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}

}