#include "main.h"
#include <stdlib.h>
/**
 *  _strdup- creates an array of chars, and initializes it with char
 * @str: character
 * Return: array or null
 */

char *_strdup(char *str)
{
	char *copy;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	copy = malloc(sizeof(char) * (len + 1));

	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';

	return (copy);

}
