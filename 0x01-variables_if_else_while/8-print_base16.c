#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char hex[] = "0123456789abcdef";

	for (n = 0 ; n < 16 ; n++)
	{
		putchar(hex[n]);
	}
	putchar('\n');

	return (0);
}
