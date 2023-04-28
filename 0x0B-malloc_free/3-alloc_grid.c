#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -A function that returns a pointer to a 2D array of integers
 * @width: Input integer at number of columns
 * @height: input integer at number of rows
 *
 * Return: Pointer to a 2D array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
