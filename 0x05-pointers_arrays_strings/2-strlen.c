#include "holberton.h"
/**
 *_strlen - Function that returns the length of a string.
 *@s: String to be used.
 *
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
