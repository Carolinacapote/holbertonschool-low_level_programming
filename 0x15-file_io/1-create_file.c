#include "holberton.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file.
 * @filename: Name of the file to be created.
 * @text_content: Text to be writen in the new file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int new_file = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (new_file < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	write(new_file, text_content, i);
	close(new_file);
	return (1);
}
