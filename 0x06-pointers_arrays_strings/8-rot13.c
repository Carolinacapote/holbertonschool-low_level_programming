#include "holberton.h"
/**
 *rot13 - Function that encodes a string using rot13.
 *@s: string to be changed.
 * Return: Pointer to the result.
 */
char *rot13(char *s)
{
	int i, j;
	char original[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char change[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; original[j] != 0; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = change[j];
				break;
			}
		}
	}
	return (s);
}
