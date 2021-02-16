#include "holberton.h"
/**
 *print_rev - Function that prints a string in reverse followed by new line.
 *@s: String to be printed.
 *
 * Return: void.
 */
void print_rev(char *s)
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
