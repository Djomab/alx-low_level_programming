#include "main.h"

/**
 * swap_int - updates the value it points to to 98.
 * @a : first param
 * @b : second param
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
