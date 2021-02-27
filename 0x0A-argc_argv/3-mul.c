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
	int i, mul = 1;

	if (argc > 1 && argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
