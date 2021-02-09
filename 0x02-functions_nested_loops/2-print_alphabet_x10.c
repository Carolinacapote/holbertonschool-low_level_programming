#include "holberton.h"

/**
 * print_alphabet_1x10 - Entry point, printing alphabet 10 times
 *
 * return nothing
 */

void print_alphabet_x10(void)
{
	char ch;
	int newline = 0;

	while (newline < 10)
	{
		ch = 97;
		while (ch <= 122)
		{
			_putchar(ch);
				ch++;
		}
		_putchar('\n');
		newline++;
	}
}
