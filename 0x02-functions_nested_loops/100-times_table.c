#include <stdio.h>
#include "holberton.h"
/**
 * print_times_table -  prints the n times table starting with 0
 *@n: random natural number
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n <= 15)
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				printf("%d", i * j);
				if (j < n && j >= 99)
					printf(", ");
				else if ((j < n) && (j < 99) && (j >= 9))
					printf(",  ");
				else
				{
					printf(",   ");
				}
			}
			printf("\n");
		}
}
