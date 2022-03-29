#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard.
 * @a : array of char
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (a[i][8])
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);

			j++;
		}
		_putchar('\n');

		i++;
	}
}
