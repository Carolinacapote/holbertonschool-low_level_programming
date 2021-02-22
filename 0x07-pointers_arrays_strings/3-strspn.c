#include "holberton.h"
/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: String to be used.
 *@accept: Characters to be compared.
 * Return: The number of bytes in the initial segment of "s"
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, length = 0;

	while (s[i])
	{
		if (accept[j] == '\0')
			return (length);
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				length += 1;
				break;
			}
		}
		i++;
	}
	return (length);
}
