#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * return nothing
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 97 ; ch <= 122 ; ch++)
	{
		_putchar(ch);
	}
	 _putchar('\n');
}
