#include <stdio.h>

/*
 * main - finds and prints the largest prime factor of the number 61285247514
 * Return 0.
 *
 **/

int main(void)
{
	long int n = 612852475143;
	int div = 2, ans = 0, maxfact;

	while (n != 0)
	{
		if (n % div != 0)
			div++;
		else
		{
			maxfact = n;
			if (n / div == 1)
			{
				printf("%d", maxfact);
				ans = 1;
			}
		}
	}

	return (0);
}
