#include "main.h"

/**
 *_abs - a function that computes the absolute value of an integer
 *@n: The number
 *
 *Return: On success 1.
 * Returns abs of the number
 */
int _abs(int n)
{
	if (n  <  0)
		return (-1 * n);
	else
		return (n);
}

