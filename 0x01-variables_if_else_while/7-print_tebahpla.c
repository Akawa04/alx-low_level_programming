#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the digits from 0 to 9.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'
			, 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
			'u', 'v', 'w', 'x', 'y', 'z'};
	int i;

	for (i = 25; 0 <= i; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
