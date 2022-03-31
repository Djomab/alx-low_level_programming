#include "main.h"

/**
 *  _strlen_recursion-  prints a string, followed by a new line.
 * @s : char
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
