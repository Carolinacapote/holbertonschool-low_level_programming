#include "holberton.h"
/**
 *print_triangle - Function that prints a triangle followed by new line
 *@size: is the size of the triangle
 *
 * Return: void.
 */

void print_triangle(int size)
{
	char sharp = '#';
	int i, j, triangle;

	for (i = 0; i < size; i++)
	{
		for (j = size; j >= i; i--)
		{
			for (triangle = 0; triangle < i; triangle++)
				_putchar(sharp);
			_putchar(' ');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
