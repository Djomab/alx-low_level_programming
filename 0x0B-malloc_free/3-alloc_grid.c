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
	int **tableau2d;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	tableau2d = malloc(height * sizeof(int *));

	if (tableau2d == NULL)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		tableau2d[i] = malloc(width * sizeof(int));
		if (tableau2d[i] == NULL)
		{
			for (; i >= 0; i--)
				free(tableau2d[i]);
			free(tableau2d);
			return (NULL);
		}
	}

	for (i = 0; i < height; ++i)
		for (j = 0; j < width; j++)
			tableau2d[i][j] = 0;

	return (tableau2d);
}
