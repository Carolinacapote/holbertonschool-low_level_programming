#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - sum of 2 integers.
 * @a: First integer to be used.
 * @b: Second integer to be used.
 * Return: the result of the sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference between 2 integers.
 * @a: First integer to be used.
 * @b: Second integer to be used.
 * Return: The result of the difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies 2 integers.
 * @a: First integer to be used.
 * @b: Second integer to be used.
 * Return: The product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides 2 integers.
 * @a: First integer to be used.
 * @b: Second integer to be used.
 * Return: the result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - The remainder of a number.
 * @a: Number to be divided.
 * @b: Second number of the division.
 * Return: the remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
