#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stlib.h>
/**
 * main -
 * @argc:
 */
void main(int argc, char *argv[])
{
	char *error_msg2 = "Error: Can't read from file ";
	char *file_from[1024] = argv[1], *file_to = argv[2];
	char buf[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	if (!argv[1])
	{
		write(STDERR_FILENO, error_msg2, 28)
		exit(98);
	}
}
