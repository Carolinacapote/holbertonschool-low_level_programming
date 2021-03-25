#include <stdio.h>
#include "holberton.h"
/**
 * _pow - Function that elevates a number "base" into "exp"
 * @base: Number to be elevated
 * @exp: exponent of the operation.
 * Return: The result.
 */
double _pow(double base, double exp)
{
	int i; /* Variable used in loop counter */
	double number = 1;

	for (i = 0; i < exp; ++i)
	{
		number *= base;
	}
	return (number);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The unsigned int, or "0" if b in NULL
 * or there are chars that are not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	double number = 0;
	int i;
	double base = 2, exponent;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	exponent = 0;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			number += _pow(base, exponent);
		}
		exponent++;
		i--;
	}
	return ((unsigned int)number);
}
