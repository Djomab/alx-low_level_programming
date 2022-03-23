#include <stdio.h>
#include "main.h"

/**
 * print_array - updates the value it points to to 98.
 * @a : array
 * @n : numbers of elements in array
 * Return: lenght of s.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
