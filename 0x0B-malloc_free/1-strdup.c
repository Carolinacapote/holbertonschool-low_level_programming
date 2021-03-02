#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: String to be duplicated.
 * Return: Pointer to the duplicate of str, NULL if str = NULL or if
 * xinsufficient memory is available.
 */
char *_strdup(char *str)
{
	int size = 0;
	char *duplicate, *copy;

	while (*(str + size) != '\0')
		size++;
	duplicate = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	copy = duplicate;
	size = 0;
	while (*(str + size))
	{
		copy[size] = str[size];
		size++;
	}
	*copy = '\0';
	return (duplicate);
}
