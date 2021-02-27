#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function with arguments argc and argv.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argv[i])
		printf("%d\n", argc - 1);
	return (0);
}
