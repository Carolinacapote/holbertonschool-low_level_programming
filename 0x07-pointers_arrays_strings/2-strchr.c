#include "holberton.h"
#include <stdio.h>
/**
 *_strchr - function that locates a character in a string.
 *@s: String to be used.
 *@c: Character to be searched.
 * Return: A pointer to the first ocurrence of c or NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
