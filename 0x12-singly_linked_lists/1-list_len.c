#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns number of elements in the linked list.
 * @h: Pointer to the head node.
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h->str == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
