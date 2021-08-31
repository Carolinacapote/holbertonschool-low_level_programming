#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, i, lower_idx, higher_idx;

	if (!array)
		return (-1);

	lower_idx = 0;
	higher_idx = size - 1;

	while (higher_idx >= lower_idx)
	{
		printf("Searching in array: ");
		for (i = lower_idx; i <= higher_idx; i++)
		{
			if (i == lower_idx)
				printf("%d", array[i]);
			else
			{
				printf(", %d", array[i]);
			}
		}
		printf("\n");

		middle = (lower_idx + higher_idx) / 2;

		if (array[middle] == value)
			return ((int)middle);

		else if (array[middle] > value)
			higher_idx = middle - 1;

		else
			lower_idx = middle + 1;
	}
	return (-1);
}
