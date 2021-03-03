#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: String to be duplicated.
 * Return: Pointer to the duplicate of str, NULL if str = NULL or if
 * insufficient memory is available.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int len = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * len + 1);
	if (!duplicate)
		return (NULL);
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];
	duplicate[i] = '\0';
	return (duplicate);
	free(duplicate);
}
