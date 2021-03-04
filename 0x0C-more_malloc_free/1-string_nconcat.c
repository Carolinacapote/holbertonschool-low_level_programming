#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates 2 strings.
 * @s1: Initial string
 * @s2: Last string.
 * @n: Number of bytes from s2 to be concatenated to s1.
 * Return: Pointer to new allocated space in memory. NULL if fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j = 0;

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
	for (j = 0; j < n && s2[j]; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
