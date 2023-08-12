#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the digits from 0 to 9 separated by commas and spaces.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},i = 0;

	do
	{
		putchar(alphabet[i]);
		
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		
		i++;
	}
	while (i < 10);

	putchar('\n');

	return (0);
}
