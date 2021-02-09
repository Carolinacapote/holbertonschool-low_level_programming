#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[] = "Holberton";
	int letters;

	for (letters = 0 ; letters <= 9 ; letters++)
	{
		_putchar(ch[letters]);
	}
	 _putchar('\n');
	return (0);
}
