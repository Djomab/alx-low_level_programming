#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: const count of params
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int somme = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		somme += va_arg(args, int);
	}

	va_end(args);

	return (somme);

}
