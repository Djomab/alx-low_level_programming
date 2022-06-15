#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: dlistint_t list
 * Return: number of nodes size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nb = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d \n", h->n);
		nb++;
		h = h->next;
	}

	return (nb);
}
