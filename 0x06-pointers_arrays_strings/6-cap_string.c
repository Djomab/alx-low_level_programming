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
 * cap_string - function ...
 * @str: string
 *
 * Return: 1 or 0
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = upper(str[i]);
		i++;
	}
	return (str);
}
