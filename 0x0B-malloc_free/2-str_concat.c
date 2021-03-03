#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _length2 - Finds the lenght of 2 strings.
 * @s1: String 1.
 * @s2: String 2.
 * @length1: Length of s1.
 * @length2: Length of s2.
 * Return: length1+2.
 */
int _length2(char *s1, char *s2, int length1, int length2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (length1 + length2);
	return (_length2(s1 + 1, s2 + 1, length1 + 1, length2 + 1));
}
/**
 * str_concat - Concatenates two strings.
 * @s1: First string to be concatenated.
 * @s2: second string to be concatenated.
 * Return: Pointer to the location of the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;

	concat = malloc(sizeof(char) * _length2(s1, s2, 0, 0) + 1);
	if (!concat)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
