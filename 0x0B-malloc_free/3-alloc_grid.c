#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid  - creates an array of chars, and initializes it with char
 * @width: int
 * @height: int
 * Return: array or null
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	int **arr = malloc((width * height) * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; i < height; i++)
		{
			arr[j] = 0;
		}
	}

	return (arr);

}
