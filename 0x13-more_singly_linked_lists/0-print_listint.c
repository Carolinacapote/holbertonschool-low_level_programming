#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the elements of the list.
 * @h: pointer to the first node.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
