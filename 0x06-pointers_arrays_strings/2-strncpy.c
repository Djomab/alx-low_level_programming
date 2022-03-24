#include <stdio.h>
#include "main.h"

/**
 * _strncpy - updates the value it points to to 98.
 * @dest : array
 * @src : numbers of elements in array
 * @n : int
 * Return: lenght of s.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
