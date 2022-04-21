#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: pointeur de type list_t
 * Return: void
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%u], %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		size++;

	}

	return (size);
}
