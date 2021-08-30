#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
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

		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i++;
	}
	return (-1);
}
