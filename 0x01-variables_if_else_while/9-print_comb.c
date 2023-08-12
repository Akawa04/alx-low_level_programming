#include <stdio.h>

/*
 *
 *
 * Alphabet*/
int main (void)
{
	char alphabet[] = { '0' , ',' , ' ' , '1', ',' , ' ' , '2' , ',' , ' ' , '3', ',' , ' ' , '4', ',' , ' ' , '5', ',' , ' ' , '6', ',' , ' ' , '7', ',' , ' ' , '8', ',' , ' ' , '9' };
	int i;
	for (i = 0; i < 31; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
