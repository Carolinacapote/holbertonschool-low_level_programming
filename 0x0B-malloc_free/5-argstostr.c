#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Function that concatenates all the arguments of your program.
 * @ac: Number or arguments.
 * @av: Arguments.
 * Return: Arguments.
 */
char *argstostr(int ac, char **av)
{
	char *new_string;
	int i, j;

	if (ac == 0 || av == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		i++;
	}
	new_string = malloc(sizeof(char) * (j + i + 1));
	if (!new_string)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			new_string[i] = av[i][j];
	}
	return (new_string);
}
