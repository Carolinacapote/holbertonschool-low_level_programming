#include "holberton.h"
/**
 * set_bit - function that returns the value of a bit at a given index.
 * @n: decimal number to be used.
 * @index: position of the digit in the binary representation.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;
	unsigned int a[1024];
	unsigned int number = *n;

	if (!number)
		return (-1);
	if (number < 1)
	{
		number = 1;
	}
	for (i = 0; number > 0; i++)
	{
		a[i] = number % 2;
		number = number / 2;
	}
	i = i - 1;
	while (i >= 0)
	{
		if (i == (int)index)
			a[i] = 0;
		i--;
	}
	return ((int) a[i] + 1);
}
