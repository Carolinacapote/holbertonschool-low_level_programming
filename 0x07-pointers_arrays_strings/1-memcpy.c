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
	unsigned int i, j;

	i = 0;
	while (src[i])
		i++;
	for (i = 0; i < n; i++)
	{
		j = 0;
		while (dest[j])
		src[i] = dest[j];
		j++;
	}
	return (dest);
}
