#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: list head
 * @n: int const
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Création du nouvel élément */
	listint_t *nouveau = malloc(sizeof(listint_t));

	/* Assigner une valeur au nouvel élément*/
	nouveau->n = n;

	/* Insertion de l'élément au début de la liste*/
	nouveau->next = *head;
	*head = nouveau;

	return (nouveau);
}
