#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *aRenvoyer;

	/* Tant que la liste n'est pas vide*/
	while (head != NULL)
	{
		/* on stock l'adresse de l'élt suivant */
		aRenvoyer = head->next;

		/*On libère le premier élt*/
		free(head);

		/* on retourne le nouvel élt au debut de la liste */
		head = aRenvoyer;
	}
}
