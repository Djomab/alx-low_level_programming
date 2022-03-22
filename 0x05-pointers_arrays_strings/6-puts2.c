#include "main.h"

/**
 * puts2- updates the value it points to to 98.
 * @str : first param
 * Return: lenght of s.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
