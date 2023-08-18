#include "main.h"

/**
 * print_number - Prints an integer as a character
 * @n: The integer to be printed
 */

void print_number(int n)
{
	int quotien;

	if (n >= 0)
	{
		if (n >= 1000)
		{
			quotien = n / 1000;
			n = n - (quotien * 1000);
			_putchar('0' + quotien);
			quotien = n / 100;
			n = n -(quotien * 100);
			_putchar('0' + quotien);
			quotien = n / 10;
			n = n -(quotien * 10);
			_putchar('0' + quotien);
			_putchar('0' + n);
			_putchar('\n');
		}
		else if (n >= 100 && n <= 999)
		{
			quotien = n / 100;
			n = n -(quotien * 100);
			_putchar('0' + quotien);
			quotien = n / 10;
			n = n -(quotien * 10);
			_putchar('0' + quotien);
			_putchar('0' + n);
			_putchar('\n');
		}
		else if (n >= 10 && n <= 99)
		{
			quotien = n / 10;
			n = n -(quotien * 10);
			_putchar('0' + quotien);
			_putchar('0' + n);
			_putchar('\n');
		}
		else if (n < 10)
		{
			_putchar('0' + n);
			_putchar('\n');
		}
	}
	else if (n < 0)
	{
		_putchar('-');
		n = (-1 * n);
		if (n >= 1000)
		{
			quotien = n / 1000;
			n = n - (quotien * 1000);
			_putchar('0' + quotien);
			quotien = n / 100;
                        n = n -(quotien * 100);
                        _putchar('0' + quotien);
                        quotien = n / 10;
                        n = n -(quotien * 10);
                        _putchar('0' + quotien);
                        _putchar('0' + n);
                        _putchar('\n');
		}
		else if (n >= 100 && n <= 999)
		{
			quotien = n / 100;
			n = n -(quotien * 100);
			_putchar('0' + quotien);
			quotien = n / 10;
                        n = n -(quotien * 10);
                        _putchar('0' + quotien);
                        _putchar('0' + n);
                        _putchar('\n');

		}
		else if (n >= 10 && n <= 99)
		{
			quotien = n / 10;
			n = n -(quotien * 10);
			_putchar('0' + quotien);
			 _putchar('0' + n);
                        _putchar('\n');
		}
		else if (n < 10)
		{
			_putchar('0' + n);
			_putchar('\n');
		}
	}
}
