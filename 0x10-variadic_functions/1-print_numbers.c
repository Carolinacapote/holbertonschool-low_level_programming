#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Functions that prints the numbers.
 * @separator: string to be printed between numbers.
 * @n: Number of integers.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_pointer;

	va_start(arg_pointer, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_pointer, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_pointer);
}
