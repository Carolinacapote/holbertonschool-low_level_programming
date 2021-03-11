#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Functions that adds all its parameters.
 * @n: Number of parameters.
 * Return: the result of the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum_n = 0;
	unsigned int i;
	va_list arg_pointer;

	va_start(arg_pointer, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum_n += va_arg(arg_pointer, int);
	va_end(arg_pointer);
	return (sum_n);
}
