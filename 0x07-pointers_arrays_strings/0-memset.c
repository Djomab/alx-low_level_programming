#include "main.h"
/**
 *_memset - function that fills memory with a constant byte
 * @s : char
 * @b : char
 * @n : int
 * Return: 0 or 1
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
