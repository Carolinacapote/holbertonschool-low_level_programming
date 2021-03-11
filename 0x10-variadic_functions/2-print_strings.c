#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Functions that prints strings.
 * @separator: string to be printed between the strings.
 * @n: Number of strings to be printed.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_pointer;
	char *temp;

	va_start(arg_pointer, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(arg_pointer, char *);
		if (temp == NULL)
			temp = "(nil)";
		printf("%s", temp);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_pointer);
}
