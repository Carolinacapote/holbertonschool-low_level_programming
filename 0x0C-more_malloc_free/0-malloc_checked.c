#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: int.
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *point;

	point = malloc(sizeof *point * b);
	if (!point)
		return ("98");
	return (point);
}
