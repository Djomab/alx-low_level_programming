#include "main.h"

/**
 * _pow_recursion - prints a string, followed by a new line.
 * @x : int
 * @y : int
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	int puissance;

	if (y < 0)
	{
		puissance = -1;
	}
	else if (y == 0)
		puissance = 1;
	else
		puissance = x * _pow_recursion(x, y - 1);

	return (puissance);
}
