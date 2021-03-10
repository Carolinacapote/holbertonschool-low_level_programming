#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer.
 * @array: to be used.
 * @size: number of elements in the array.
 * @cmp: Pointer to the function to be used to compare values.
 * Return: (-1) if no element matches or if sze = 0, the index of the
 * first element for wich the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
