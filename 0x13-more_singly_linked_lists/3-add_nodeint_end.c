#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list.
 * @head: list head
 * @n: int const
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;

	/* Création du nouvel élément */
	listint_t *nouveau = malloc(sizeof(listint_t));

	if (nouveau == NULL)
		return (NULL);

	/* Assigner une valeur au nouvel élément*/
	nouveau->n = n;

	/* Insertion de l'élément à la fin de la liste*/
	nouveau->next = NULL;

	/*si la liste est vide, on retourne le nouvel elt*/
	if (*head == NULL)
	{
		*head = nouveau;
		return (nouveau);
	}

	/*sinon on parcours la list à l'aide d'in ptr temp*/
	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = nouveau;

	return (nouveau);
}
