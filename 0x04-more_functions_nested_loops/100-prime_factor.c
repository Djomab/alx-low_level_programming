#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
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
				printf("\n");
				break;
			}
		}
	}

	return (0);
}
