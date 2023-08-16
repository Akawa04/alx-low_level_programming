#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/** functions **********************************************************/

void _putchar(char c)
{
	putchar(c);
}

void print_alphabet(void) 
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
