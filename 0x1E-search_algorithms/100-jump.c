#include "search_algos.h"
#include <math.h>
/**
 * linear - searches for a value in an array of integers using the
 * Linear search algorithm, aux function of jump_search
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * @lower_idx: lower index of the array where value could be found.
 * Return: the first index where value is located, otherwise -1
 */
int linear(int *array, size_t size, size_t lower_idx, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i,
			       array[i]);
			return ((int)i);
		}

		if (i >= lower_idx)
			printf("Value checked array[%d] = [%d]\n", (int)i,
			       array[i]);
		i++;
	}
	return (-1);
}

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step, high_idx, low_idx = 0;

	if (!array)
		return (-1);

	jump_step = sqrt(size);

	while (size > low_idx)
	{
		if (value > array[low_idx])
		{
			printf("Value checked array[%d] = [%d]\n",
			       (int)low_idx, array[low_idx]);
			low_idx += jump_step;
		}
		else
		{
			high_idx = low_idx;
			low_idx -= jump_step;
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)low_idx, (int)high_idx);

			return (linear(array, high_idx + 1, low_idx, value));
		}
	}

	low_idx -= jump_step;
	printf("Value found between indexes [%d] and [%d]\n", (int)low_idx,
	       (int)(low_idx + jump_step));
	printf("Value checked array[%d] = [%d]\n", (int)low_idx, array[low_idx]);
	return (-1);
}
