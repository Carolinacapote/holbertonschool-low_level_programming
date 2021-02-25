#include "holberton.h"
/**
 * _length - Finds the lenght of a string.
 * @s: String.
 * @length: Length of s.
 * Return: length.
 */
int _length(char *s, int length)
{
	if (*s == '\0')
		return (length);
	return _length(s + 1, length + 1);
}
/**
 * _strlen_recursion - function that returns length of a string.
 * @s: String to be used.
 * Return: length of s.
 */
int _strlen_recursion(char *s)
{
	return (_length(s, 0));
}
