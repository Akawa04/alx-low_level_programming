#include "main.h"

void print_numbers(void)
{
	int num;
	for(num = 0; num <= 9; num++)
	{
		_putchar('O' + num);
	}
	_putchar('\n');
}
