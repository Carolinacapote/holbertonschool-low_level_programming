#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: the number of nodes printed.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
