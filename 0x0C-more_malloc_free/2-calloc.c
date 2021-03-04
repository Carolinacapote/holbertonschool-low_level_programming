#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @size: Of the nmemb.
 * @nmemb: number of elements of the array.
 * Return: Pointer to new allocated space in memory. NULL if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (!array)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
