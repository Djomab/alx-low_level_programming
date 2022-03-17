#include "main.h"

/**
 * print_line: - prints the numbers, from 0 to 9 except 2 and 4
 *
 * @n: number
 * Return: void
 *
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
