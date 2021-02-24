#include "holberton.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: String to be printed.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	int n = 0;

	while (s[n])
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
