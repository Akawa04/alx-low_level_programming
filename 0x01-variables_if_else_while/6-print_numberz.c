#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	int i,
	    num[] = {'0','1','2','3','4','5','6','7','8','9'};
	for (i = 0; i < 11; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
