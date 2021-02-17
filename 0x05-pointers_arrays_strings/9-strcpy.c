#include "holberton.h"
#include <stdio.h>
/**
 *_strcpy - function that copies the string pointed to by src, including
 *the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: destintion of the copy.
 *@src: string pointed to by src.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	dest = dest - i;
	return (dest);
}
