#include "main.h"

/**
 * _strlen- updates the value it points to to 98.
 * @s : first param
 * Return: lenght of s.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
