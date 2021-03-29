#include "holberton.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Text to be writen at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int text = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);
	text = open(filename, O_WRONLY | O_APPEND, 0600);
	if (text < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	write(text, text_content, i);
	close(text);
	return (1);
}
