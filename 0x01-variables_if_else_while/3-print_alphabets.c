#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the lowercase and uppercase alphabets.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't','u', 
			'v', 'w', 'x', 'y', 'z'}, 
	     ALPHABET[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 
			'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 
			'V', 'W', 'X', 'Y', 'Z'};
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}

	for (i = 0; i < 26; i++)
        {
                putchar(ALPHABET[i]);
        }

	putchar('\n');
	return (0);
}
