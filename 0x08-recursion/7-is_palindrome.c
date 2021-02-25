#include "holberton.h"
/**
 * _strlen_recursion - Finds the length of a string.
 * @s: string to be used.
 * Return: length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * isPalindromeRecursive - finds if strings are palindromes.
 * @string: String to be used.
 * @length: counter to find length of string.
 * Return: 1 if position null is in the end or 0 if not.
 */
int isPalindromeRecursive(char *string, int length)
{
	if (string[0] != string[length])
	{
		return (0);
	}
	else if (string[0] == '\0')
	{
		return (1);
	}
	else
	{
		return (isPalindromeRecursive(string + 1, length - 2));
	}
}
/**
 * is_palindrome - Function that finds palindromes.
 * @s: String to be used.
 * Return: 1 if string is palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (isPalindromeRecursive(s, length - 1));
}
