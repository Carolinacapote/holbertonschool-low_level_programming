#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the node at "index" position
 * of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @index: is the index of the node, starting from 0.
 * Return: The node at "index" position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node_at_index;

	if (head == NULL)
		return (NULL);

	node_at_index = head;
	while (head)
	{
		if (i == index)
			return (node_at_index);
		node_at_index = node_at_index->next;
		i++;
	}

	return (NULL);
}
