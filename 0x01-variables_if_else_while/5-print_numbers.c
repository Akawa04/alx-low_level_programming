#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the digits from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i;

	for (i = 0; i < 11; i++)
	{
		printf("%c", num[i])
	}
	return (0);
}
