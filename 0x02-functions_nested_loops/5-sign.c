#include "holberton.h"

/**
 * print_sign - Enter point printing signs
 *@n: The number to be checked
 *Return: 1 if the number is positive. -1 if it is negative otherwise 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else
	{
		_putchar(48);
		return (0);
	}


}
