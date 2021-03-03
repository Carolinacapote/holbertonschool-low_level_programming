#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional array.
 * @grid: array to be used.
 * @height: size of array.
 * Return: Null if it fails or Size = 0, pointer to the array if works.
 */
void free_grid(int **grid, int height)
{
	free(*(grid + height));
}
