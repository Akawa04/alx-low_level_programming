#include <stdio.h>

/*
 *
 *
 * Alphabet*/
int main (void)
{
	char alphabet[] = { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z' };
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar(' ');
	return (0);
}
