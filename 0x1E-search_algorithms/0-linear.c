#include<stdlib.h>
#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - linear search algo
 * @array: array in which to search
 * @size: size of array
 * @value: searched value
 * Return: value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (value);
		}
	}

	return (-1);
}
