#include <string.h>
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
	char *array;

	array = malloc(size * sizeof(char));
	memset(array, c, size);
	return (array);
	if (size == 0 || !array)
		return (NULL);
}
