#include<stdlib.h>
#include <stdio.h>
#include "search_algos.h"


/**
 * binary_search - binary search algo
 * @array: array in which to search
 * @size: size of array
 * @value: searched value
 * Return: index of searched value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, begin = 0, end = size - 1, mid = (begin + end) / 2;

	if (value == array[mid])
	{
		return ((int) mid);
	}

	while (begin <= end)
	{
		printf("Searching in array: ");
		for (i = begin; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		if (array[mid] < value)
		{
			begin = mid + 1;
			mid = (begin + end) / 2;

			if (value == array[mid])
			{
				return ((int) mid);
			}
		}
		else
		{
			end = mid - 1;
			mid = (begin + end) / 2;

			if (value == array[mid])
			{
				return ((int) mid);
			}
		}
	}

	return (-1);
}
