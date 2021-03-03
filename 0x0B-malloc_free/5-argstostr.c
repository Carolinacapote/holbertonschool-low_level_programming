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
	int i;

	new_string = malloc(av * sizeof(char));
	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
		av[i];
	return (av);
}
