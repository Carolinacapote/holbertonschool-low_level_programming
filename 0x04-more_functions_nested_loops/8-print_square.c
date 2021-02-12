#include "holberton.h"
/**
 *print_square - Function that prints a square followed by new line
 *@size: is the size of the square
 *
 * Return: void.
 */

void print_square(int size)
{
	char sharp = '#';
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar(sharp);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
