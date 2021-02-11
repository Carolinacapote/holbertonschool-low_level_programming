#include "holberton.h"
/**
 *print_numbers - function to print the numbers from 0 to 9 and new line.
 *
 * Return: void.
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
		if (i == 9)
			_putchar('\n');
	}
}
