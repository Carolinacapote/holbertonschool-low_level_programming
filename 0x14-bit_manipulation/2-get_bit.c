#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: decimal nomber to be used.
 * @index: position of the digit in the binary representation.
 * Return: Value of the digit in index position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	unsigned int a[1024];
	int num_at_index;

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	i = i - 1;
	while (i >= 0)
	{
		if (i == (int)index)
			num_at_index = a[i];
		i--;
	}
	return (num_at_index);
}
