#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: First string to be concatenated.
 * @s2: second string to be concatenated.
 * Return: Pointer to the location of the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	concat = malloc(sizeof(char) * (i + j) + 1);
	if (!concat)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
