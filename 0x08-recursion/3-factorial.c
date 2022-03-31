#include "main.h"

/**
 * factorial - prints a string, followed by a new line.
 * @n : int
 * Return: factorial
 */

int factorial(int n)
{
	int f;

	if (n < 0)
	{
		f = -1;
	}
	else if (n == 0)
		f = 1;
	else
		f = n * factorial(n - 1);

	return (f);
}
