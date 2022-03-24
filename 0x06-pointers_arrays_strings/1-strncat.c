#include <stdio.h>
#include "main.h"

/**
 * _strncat - updates the value it points to to 98.
 * @dest : array
 * @src : numbers of elements in array
 * @n : int
 * Return: lenght of s.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
