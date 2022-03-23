#include <stdio.h>
#include "main.h"

/**
 * _strcpy - updates the value it points to to 98.
 * @dest : array
 * @src : numbers of elements in array
 * Return: lenght of s.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
