#include<stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function ...
 * @b: the chaine
 *
 * Return: 1 or 0
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
