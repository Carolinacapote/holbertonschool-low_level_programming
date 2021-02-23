#include "holberton.h"
#include <stdio.h>
/**
 *set_string -  function that sets the value of a pointer to a char.
 *@s: String to be copied
 *@to: String to be changed
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
