#include "main.h"
/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 */

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
			_putchar('0' + 1);
                        _putchar('0' + num);
                }
		_putchar('\n');
	}
}
