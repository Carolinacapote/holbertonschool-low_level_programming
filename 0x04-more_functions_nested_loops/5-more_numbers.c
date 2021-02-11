#include "holberton.h"
/**
 *more_numbers - Func. to print 10 times numbers from 0 to 14
 *
 * Return: void.
 */

void more_numbers(void)
{
	int j = 0;
	int i;

	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10 && i <= 14)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
