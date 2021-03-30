#include "holberton.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it.
 * @filename: Name of the file to be created.
 * @letters: number of letters to be printed.
 * Return: number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int text = 0, to_read;
	char *buf;

	buf = malloc(letters * sizeof(char));
	if (filename == NULL)
		return (0);
	text = open(filename, O_RDONLY);
	if (text == -1)
		return (0);
	to_read = read(text, buf, letters);
	write(STDOUT_FILENO, buf, to_read);
	close(text);
	return (to_read);
}
