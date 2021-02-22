#include "holberton.h"
/**
 *_memset - function that fills memory with a constant byte.
 *@s: Memory area to be filled.
 *@b: Constant byte, value to be set.
 *@n: Number of the bytes to be used.
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
