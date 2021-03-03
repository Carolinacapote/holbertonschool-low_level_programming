#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _length - Finds the lenght of a string.
 * @str: String.
 * @length: Length of s.
 * Return: length.
 */
int _length(char *str, int length)
{
	if (*str == '\0')
		return (length);
	return (_length(str + 1, length + 1));
}
/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: String to be duplicated.
 * Return: Pointer to the duplicate of str, NULL if str = NULL or if
 * xinsufficient memory is available.
 */
char *_strdup(char *str)
{
	char *duplicate, *copy;

	duplicate = malloc(sizeof(char) * _length(str, 0) + 1);
	if (str == NULL)
		return (NULL);
	copy = duplicate;
	while (*str)
	{
		*copy = *str;
		str++;
		copy++;
	}
	*copy = '\0';
	return (duplicate);
	free(duplicate);
}
