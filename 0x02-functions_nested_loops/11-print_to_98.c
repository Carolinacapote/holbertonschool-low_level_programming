#include "holberton.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98
 *@n: random natural number
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	else if (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	else
	{
		printf("%d\n", n);
	}
}
