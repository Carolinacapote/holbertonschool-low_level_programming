#include "holberton.h"
/**
 *_memcpy -  function that copies memory area.
 *@dest: Memory area of destination.
 *@src: Memory area to be copied.
 *@n: Number of the bytes to be copied.
 * Return: A pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
