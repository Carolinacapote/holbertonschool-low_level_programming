#include "holberton.h"
/**
 *_strcat - Function that concatenates 2 strings.
 *@dest: First string to be concatenated.
 *@src: String to be appended.
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
