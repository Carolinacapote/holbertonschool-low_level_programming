#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: Of the array.
 * @height: Of the array.
 * Return: Pointer to an array. NULL on failure or if Width or height= 0
 * or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int *array;

	array = malloc((width * height) * sizeof(int));
	if (width <= 0 || height <= 0)
		return (NULL);
	i = 0;
	while (i < height)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
		i++;
	}
	return (array[i]);
}
