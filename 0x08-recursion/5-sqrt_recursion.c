#include "holberton.h"
/**
 * sqrt_aux -  auxiliar function that returns the natural
 * square root of a number.
 * @n: Base number
 * @sq: Square root of n.
 * Return: sq if n has a square root, -1 if n does not have s
 * quare root.
 */
int sqrt_aux(int n, int sq)
{
	if (n == sq * sq)
		return (sq);
	else if (n < sq * sq)
		return (-1);
	return (sqrt_aux(n, sq + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number.
 * @n: Base number.
 * Return: sqrt_aux if n>0, -1 if n<0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_aux(n, 0));
}
