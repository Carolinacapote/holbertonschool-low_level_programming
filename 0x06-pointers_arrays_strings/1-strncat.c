#include "holberton.h"
/**
 *_strncat - Function that concatenates 2 strings.
 *@dest: First string to be concatenated.
 *@src: String to be appended.
 *@n: Bytes from src.
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
