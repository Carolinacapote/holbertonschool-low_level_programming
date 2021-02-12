#include "holberton.h"
/**
 *print_diagonal - Function that prints a diagonal followed by new line
 *@n: times character \ must be printed
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	char space = ' ';
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(space);
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
