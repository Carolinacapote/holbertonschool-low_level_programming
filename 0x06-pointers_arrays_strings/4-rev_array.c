#include "holberton.h"
/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: Array to be reversed.
 *@n: Is the number of elements of the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j, half_array, temporal;

	/*a[n]*/
	half_array = n / 2;
	j = n - 1;
	for (i = 0; i < half_array && j > half_array; i++, j--)
	{
		temporal = a[i];
		a[i] = a[j];
		a[j] = temporal;
	}
}
