#include "holberton.h"
/**
 *swap_int - Function that swaps the values of 2 integers.
 *@a: first integer to be used.
 *@b: second integer to be used.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temporal_number;

	temporal_number = *b;
	*b = *a;
	*a = temporal_number;
}
