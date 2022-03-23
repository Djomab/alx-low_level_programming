#include "main.h"

/**
 *puts_half- updates the value it points to to 98.
 * @str : first param
 * Return: lenght of s.
 */

void puts_half(char *str)
{
	int i = 0, n = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;

	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
