#include "main.h"

/**
 * _sqrt - function
 * @n: int number
 * @i: int sqrt root val
 * Return: Always 0
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - prints a string, followed by a new line.
 * @n : int
 * Return: sqrt(n) natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt(n, 0));
}
