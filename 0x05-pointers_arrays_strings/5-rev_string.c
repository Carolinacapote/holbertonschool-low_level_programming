#include "holberton.h"
/**
 *rev_string - Function that reverses a string.
 *@s: String to be printed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int length, row;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (row = length; row >= 0; row--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
