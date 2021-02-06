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

	for (nleft = 0 ; nleft <= 99 ; nleft++)
	{
		for (nright = nleft ; nright <= 99 ; nright++)
		{
			if (nleft != nright)
			{
				putchar((nleft / 10) + 48);
				putchar((nleft % 10) + 48);
				putchar(' ');
				putchar((nright / 10) + 48);
				putchar((nright % 10) + 48);
			}

			if (nleft != 98 || nright != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
