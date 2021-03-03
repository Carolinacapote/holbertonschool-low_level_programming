#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars.
 * @size: size of the array.
 * @c: array.
 * Return: Null if it fails or Size = 0, pointer to the array if works.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));
	if (size == 0 || !array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
