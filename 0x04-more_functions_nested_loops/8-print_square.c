#include "main.h"
#include <stdlib.h>

/**
 * print_square - prints the numbers, from 0 to 9 except 2 and 4
 * @size: number
 * Return: void
 *
 */
void print_square(int size)
{
	int i = 0, k = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
