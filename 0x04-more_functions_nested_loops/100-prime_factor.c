#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int indice = 0, rest;
	long dividende = 612852475143, diviser = 2;
	
	printf("The prime factors of 612852475143 are  ");
	do {
		rest = dividende % diviser;
		if (rest == 0)
		{
			printf("%ld, ", diviser);
			dividende = dividende / diviser;
			diviser = 2;
			indice++;
		}
		else
		{
			diviser++;
		}
	}while (dividende != diviser);
	printf("and %ld\n", dividende);
	return(0);
}
