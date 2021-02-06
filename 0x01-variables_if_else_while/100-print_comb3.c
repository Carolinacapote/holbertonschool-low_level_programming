#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nleft;
	int nright;

	for (nleft = 0 ; nleft < 9 ; nleft++)
	{
		for (nright = nleft + 1 ; nright < 10 ; nright++)
		{
			putchar((nleft % 10) + '0');
			putchar((nright % 10) + '0');

			if (nleft == 8 && nright == 9)
				continue;
				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
