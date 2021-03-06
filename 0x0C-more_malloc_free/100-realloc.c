#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _realloc -  reallocates a memory block using malloc and free.
 * @ptr: Pointer created with malloc.
 * @old_size: Size in bytes of ptr.
 * @new_size: After relloc, new size in bytes of ptr.
 * Return: NULL if new_size = 0 or pointer ptr when works.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_relloc;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr_relloc = malloc(new_size);
	if (!ptr_relloc)
		return (NULL);
	for (i = 0; i < old_ size && i < new_size; i++)
		ptr_relloc[i] = *((char *)ptr + i);
	free(ptr);
	return (ptr_relloc);
}
