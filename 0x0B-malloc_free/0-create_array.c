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

	tab = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	return (tab);

}
