#include "holberton.h"
/**
 *puts2 - function that prints every other character of a string, starting
 *with the first character, followed by a new line.
 *@str: String to be printed.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int length;

	length = 0;
	while (*str)
	{
		_putchar(*str);
		length++;
		str++;
		str++;
	}
	_putchar('\n');
}
