#include "main.h"

/**
 * print_rev- updates the value it points to to 98.
 * @str : first param
 * Return: lenght of s.
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	i = i - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
