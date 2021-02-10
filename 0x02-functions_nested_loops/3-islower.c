#include "holberton.h"
/**
 * _islower - checking for lowercase character
 *@c: Characters to be checked
 *
 * Return: 0 if c is capital. 1 if c is lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
