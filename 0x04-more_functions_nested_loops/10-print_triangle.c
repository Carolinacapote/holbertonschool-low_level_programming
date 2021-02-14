#include "holberton.h"
/**
 *print_triangle - Function that prints a triangle followed by new line
 *@size: is the size of the triangle
 *
 * Return: void.
 */

void print_triangle(int size)
{
	int i, j, h;

	for (j = 0; j < size; j++)
	{
		for (i = size - 1; i > j; i--)
		{
			_putchar(' ');
		}
		for (h = 0; h <= j; h++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
