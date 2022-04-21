#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: pointeur de type list_t
 * Return: void
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int size = 0;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d], %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		ptr = ptr->next;
		size++;

	}

	return (size);
}
