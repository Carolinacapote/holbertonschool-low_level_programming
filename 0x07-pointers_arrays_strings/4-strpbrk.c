#include "holberton.h"
#include <stdio.h>
/**
 *_strpbrk -  function that searches a string for any of a set of bytes.
 *@s: String to be used.
 *@accept: Characters that should coincide.
 * Return: A pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	i = 0;
	while (s[i])
	{
		for (j = 0; accept[j] != 0; j++)
			if (s[i] == accept[j])
				return (s + i);
		i++;
	}
	return (NULL);
}
