#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main (void)
{
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't','u',
			'v', 'w', 'x', 'y', 'z'};
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] != 'e' && alphabet[i] != 'q' )
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
