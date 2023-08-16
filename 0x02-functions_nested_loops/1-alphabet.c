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

void putcar(char c)
{
	putchar(c);
}

void print_alphabet(void) 
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putcar(letter);
		letter++;
	}
	putcar('\n');
}
