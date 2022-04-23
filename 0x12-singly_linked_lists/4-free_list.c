#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function ...
 * @head: the list
 *
 * Return: 1 or 0
 */

void free_list(list_t *head)
{
	list_t *ptr, *tmp;

	ptr = head;
	while (ptr != NULL)
	{
		tmp =  ptr;
		ptr = ptr->next;
		free(tmp->str);
		free(tmp);
	}
}

