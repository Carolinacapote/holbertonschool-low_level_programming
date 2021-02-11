#include "holberton.h"
/**
 *print_line - Function to print a line.
 *@n: number of time the char _ would be printed
 *
 * Return: void.
 */

void print_line(int n)
{
	char line = '_';

	while (n-- && n > 0)
		_putchar(line);
	_putchar('\n');
}
