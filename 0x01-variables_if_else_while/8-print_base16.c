#include <stdio.h>

/**
 * main
 * hexadecimal caracters display.
 * Return: Always 0 is success.
 */
int main(void)
{
	char alphabet[] = {'0', '1', '2', '3', '4', '5', '6',
			'7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int i;

	for (i = 0; i <= 15; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
