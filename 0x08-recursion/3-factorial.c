#include "holberton.h"
/**
 * factorial - function that returns the factorial of n number.
 * @n: Number to be used.
 * Return: Factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
