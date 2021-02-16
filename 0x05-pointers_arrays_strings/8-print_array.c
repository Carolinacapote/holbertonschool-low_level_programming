#include "holberton.h"
#include <stdio.h>
/**
 *print_array - function that prints n elements of an array of integers,
 *followed by a new line.
 *@a: array to be printed.
 *@n: Number of elements of the array to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", *(a + i));
		else
		{
			printf("%d, ", *(a + i));
		}
	}
}
