#include<stddef.h>

/**
 * array_iterator - a function ...
 * @array: the tab of integer
 * @size: the number
 * @action: the function
 *
 * Return: 1 or 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
