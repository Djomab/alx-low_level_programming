#include <stdio.h>

/*
 * main - finds and prints the largest prime factor of the number 61285247514
 * Return 0.
 *
 **/

int main(void)
{
	long int n = 612852475143;
	int div = 2, maxfact;

	while (n != 0)
	{
		if (n % div != 0)
			div++;
		else
		{
			maxfact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d", maxfact);
				break;
			}
		}
	}

	return (0);
}
