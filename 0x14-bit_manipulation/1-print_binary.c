#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be used.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int a[1024];
	char n_binary;

	if (n < 1)
	{
		_putchar('0');
	}
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		n_binary = a[i] + '0';
		_putchar(n_binary);
	}
}
