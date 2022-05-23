#include <stdio.h>

/**
 * fibonacci - prints the first n Fibonacci numbers, starting with 1 and 2
 * @n: numbers
 * Return: 0
 */  
int main()
{
	int n = 50, nbr1 = 1, nbr2 = 2, i, suivant;
	
	for (i = 1; i <= n; i++)
	{
		if (i <= 2)
			suivant = i;
		else
		{
			suivant = nbr1 + nbr2;
			nbr1 = nbr2;
			nbr2 = suivant;
		}

		printf("%d, ", suivant);
	}

	printf("\n");
	
	return (0);
}
