#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_create - creat the hash table
 * @size: the size
 *
 * Return: the hash table pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j;
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);

	if (new->array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		new->array[j] = NULL;
	}

	return (new);
}
