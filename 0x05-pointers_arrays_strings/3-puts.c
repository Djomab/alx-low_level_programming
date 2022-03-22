#include "main.h"

/**
 * _puts- updates the value it points to to 98.
 * @str : first param
 * Return: lenght of s.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
