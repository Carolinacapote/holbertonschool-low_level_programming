#include "holberton.h"
/**
 *_strncpy - Function that copies a string.
 *@dest: Copy of the string.
 *@src: String to be copied.
 *@n: Bytes from src.
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && n--)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		n--;
		i++;
	}
	return (dest);
}
