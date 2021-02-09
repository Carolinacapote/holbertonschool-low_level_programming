#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 *@r: the number to be checked
 *Return: the value of the last digit
 *
 */

int print_last_digit(int r)
{
	int lastDigit, neg;

	lastDigit = (r % 10);
	neg = (lastDigit * -1);

	if (lastDigit >= 0)
	{
		_putchar(lastDigit + '0');
	}
	else
	{
		_putchar(neg + '0');
	}

	return (neg);
}
