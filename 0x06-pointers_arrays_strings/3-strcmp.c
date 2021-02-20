#include "holberton.h"
/**
 *_strcmp - function that compares two strings.
 *@s1: Firs string to be compared.
 *@s2: Second string to be compared
 * Return: result.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}
