#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: Pointer to the head node.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *tmp = h;

	if (tmp == NULL)
		return (0);
	i = 0;
	while (tmp != NULL)
	{
		i++;
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
	}
	return (i);
}
