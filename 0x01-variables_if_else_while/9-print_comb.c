#include <stdio.h>

/*
 *
 *
 * Alphabet*/
int main (void)
{
	int alphabet[] = { '0', '1','2' , '3','4', '5' , '6',  '7',  '8', '9' };
	int i = 0;
	do
	{
		putchar(alphabet[i]);
		
		if (i != 10)
		{
			putchar(',');
		}
		
		putchar(' ');
		
		i++;
	}
	while (i < 10);

	putchar('\n');

	return (0);
}
