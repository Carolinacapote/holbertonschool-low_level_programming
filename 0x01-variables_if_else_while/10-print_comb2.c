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

	for (nleft = 48 ; nleft <= 57 ; nleft++)
	{
		for (nright = 48 ; nright <= 57 ; nright++)
		{
			putchar(nleft);
			putchar(nright);

			if (!(nright == 57 && nleft == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
