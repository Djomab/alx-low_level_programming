#include "main.h"

/**
 * reverse_array - a function ...
 * @a: array
 * @n: length of array
 *
 * Return: 1 or 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, c;

	while (i < n - 1)
	{
		c = a[i];
		a[i] = a[n - 1];
		a[n - 1] = c;
		i++;
		n--;
	}
}
