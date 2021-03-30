#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stlib.h>
/**
 * main - functionto copy a file.
 * @argc: number of parameters.
 * @argv: text in the positions.
 */
void main(int argc, char *argv[])
{
	char *file_from[1024] = argv[1], *file_to = argv[2];
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[0])
		exit(98);
	}
}
