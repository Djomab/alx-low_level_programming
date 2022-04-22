#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
* _strlen_recursion - function
*
* @s: the chaine
* Return: Always 0.
*/

int _strlen_recursion(const char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: list
 * @str: needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new =  malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen_recursion(str);
	new->next = *head;
	*head = new;

	return (new);
}
