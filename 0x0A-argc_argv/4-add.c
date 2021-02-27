#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function with arguments argc and argv.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if argc > 1, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		if (atoi(argv[i]) >= 0)
		{
			for (; i < argc; i++)
				sum += atoi(argv[i]);
			printf("%d\n", sum);
			return (0);
		}
		else
		{
			printf("Error\n");
		}
	}
	return (0);
}
