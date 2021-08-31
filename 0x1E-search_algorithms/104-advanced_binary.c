#include "search_algos.h"
/**
 * print_array - Aux function to print and array
 * @array: array to be printed
 * @lower_idx: first index to be printed
 * @higher_idx: last index to be printed
 * Return: void
 */
void print_array(int *array, size_t lower_idx, size_t higher_idx)
{
	size_t i;

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
}
/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t middle, lower_idx, higher_idx;

	if (!array)
		return (-1);

	lower_idx = 0;
	higher_idx = size - 1;

	while (higher_idx >= lower_idx)
	{
		print_array(array, lower_idx, higher_idx);

		middle = (lower_idx + higher_idx) / 2;

		if (array[middle] == value)
		{
			if (value != array[middle - 1])
				return ((int)middle);

			return (advanced_binary(array, middle + 1, value));
		}
		else if (array[middle] > value)
			higher_idx = middle - 1;
		else
			lower_idx = middle + 1;
	}
	return (-1);
}
