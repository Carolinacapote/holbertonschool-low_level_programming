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
	int lastDigit;

	lastDigit = (r % 10);

	if (lastDigit < 0)
	{
		lastDigit = (lastDigit * -1);
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
