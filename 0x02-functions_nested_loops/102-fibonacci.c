#include <stdio.h>

/**
 * main - prints the first n Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int i; 
	unsigned long nbr1 = 0, nbr2 = 1, suivant;

	for (i = 0; i < 50; i++)
	{
		suivant = nbr1 + nbr2;	
		printf("%lu", suivant);

		nbr1 = nbr2;
		nbr2 = suivant;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
