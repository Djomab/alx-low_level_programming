#include<stddef.h>
#include<stdlib.h>

/**
 * int_index - a function ...
 * @array: the tab of integer
 * @size: the number
 * @cmp: the function
 *
 * Return: 1 or 0
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
	size_t i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
