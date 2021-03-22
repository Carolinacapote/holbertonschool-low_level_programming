#include "lists.h"
/**
 * listint_len - function that returns the number of elements of the list.
 * @h: pointer to the header.
 * Return: the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
