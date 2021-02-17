#include "holberton.h"
/**
 *rev_string - Function that reverses a string.
 *@s: String to be printed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j;
	char temporal, half_string;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	i--;
	j = i;
	half_string = i / 2;
	for (j = 0; j < half_string; j++)
	{
		temporal = s[j];
		s[j] = s[i];
		s[i] = temporal;
		i--;
	}
}
