#include "holberton.h"
/**
 *string_toupper - Changing all lowercase letters of a string to uppercase.
 *@s: String to be changed.
 *
 * Return: String changed.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
