#include <stdio.h>

/*
 *
 *
 * Alphabet*/
int main (void)
{
	string alphabet[] = { '0', '1','2' , '3','4', '5' , '6',  '7',  '8', '9' };
	int i;
	do
	{
		putchar(alphabet[i]);
		putchar(',');
		putchar(' ');
		i++;
	}
	while (i < 10)
	putchar('\n');
	return (0);
}
