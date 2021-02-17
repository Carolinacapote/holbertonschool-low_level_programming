#include "holberton.h"
/**
 *puts_half - function that prints half of a string, followed by new line.
 *@str: String to be used.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int length, half_string;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	half_string = (length / 2);
	half_string = length - half_string;
	while (*(str - half_string) != '\0')
	{
		_putchar(*(str - half_string));
		half_string--;
	}
	_putchar('\n');
}
