#include "holberton.h"

/**
 * _abs - prints absolute value of an integer
 *@i: the integer to be checked
 *
 *Return: integer
 *
 *@'int' _abs - Enter point
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = (i * -1);

	}

	return (i);
}
