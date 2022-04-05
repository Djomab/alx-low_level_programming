#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with char
 * @size: taille
 * @c: character
 * Return: array or null
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	tab = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);

	if (tab != NULL)
	{
		for (i = 0; i < size; i++)
		tab[i] = c;
	}

	return (tab);

}
