#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - that adds a new node at the end of a dlistint_t list.
 * @head: dlistint_t list.
 * @n: const int
 * Return: new element, or NUL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	/* On vérifie si la liste est vide ou pas*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new; /* on relie le dernier elt de la liste au nouvel elt*/
	new->prev = temp; /* prev du new pointe vers dernier elt de la list*/
	temp = new;

	return (new);
}
