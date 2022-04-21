#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * @h: list
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		s++;
	}

	return (s);
}
