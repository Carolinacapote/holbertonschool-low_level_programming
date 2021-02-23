#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums -  function that prints the sum of the two diagonals
 *of a square matrix of integers
 *@a: Multidimensional array
 *@size: Size of the array.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, j, position_counter = 0, sumdiagonal1 = 0, sumdiagonal2 = 0;

	i = 0;
	while (i < size)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				sumdiagonal1 += a[position_counter];
			if (i + j == size - 1)
				sumdiagonal2 += a[position_counter];
			position_counter++;
		}
		i++;
	}
	printf("%d, %d\n", sumdiagonal1, sumdiagonal2);
}
