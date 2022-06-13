#include <stdio.h>
#include "main.h"

/**
 * _strcat - updates the value it points to to 98.
 * @dest : array
 * @src : numbers of elements in array
 * Return: lenght of s.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
