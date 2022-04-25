#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: list
 * Return: number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		printf("[%d]\n", h->n);

		h = h->next;
		nbr++;
	}

	return (nbr);
}
