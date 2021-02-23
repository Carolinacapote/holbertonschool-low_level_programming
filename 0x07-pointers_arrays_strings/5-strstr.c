#include "holberton.h"
#include <stdio.h>
/**
 *_strstr -  function that locates a substring.
 *@haystack: String to be compared.
 *@needle: String should have the characters to compare.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
			i++;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
