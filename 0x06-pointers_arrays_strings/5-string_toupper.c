#include "main.h"

/**
 * upper - function
 * @c : char
 * Return: 1 or 0
 */

char upper(char c)
{
	char car;

	if (c >= 'a' && c <= 'z')
		car = c + 'A' - 'a';
	else
		car = c;

	return (car);
}

/**
 * string_toupper - a function ...
 * @str: array
 *
 * Return: 1 or 0
 */

char *string_toupper(char *str)
{
	int i = 0, c;

	while (str[i])
	{
		str[i] = upper(str[i]);
		i++;
	}
	return (str);
}
