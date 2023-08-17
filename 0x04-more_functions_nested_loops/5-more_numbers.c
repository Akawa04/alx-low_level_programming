#include "main.h"

void more_numbers(void)
{
	int num,fois;
	for (fois = 1; fois <= 10; fois++)
	{
		for(num = 0; num <= 9; num++)
		{
			_putchar('0' + num);
		}
		for(num = 0; num <= 4; num++)
                {
			_putchar('1');
                        _putchar('0' + num);
                }
		_putchar('\n');
	}
}
