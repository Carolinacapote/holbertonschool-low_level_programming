#include "holberton.h"
/**
 *leet - Function that encodes a string into 1337.
 *@s: string to be changed.
 * Return: String.
 */
char *leet(char *s)
{
	int i, j;
	char original[] = "aAeEoOtTlL";
	char change[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = change[j];
			}
		}
	}
	return (s);
}
