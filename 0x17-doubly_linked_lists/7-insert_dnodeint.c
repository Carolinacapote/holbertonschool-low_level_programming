#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: is the index where the node will be added and it starts at 0.
 * @n: Value of the new node.
 * Return: The adress of the new node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node = *h, *next_node;
	unsigned int i = 0;

	/*if (!h)*/
	/*return (NULL);*/
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	while (prev_node != NULL)
	{
		if (i == idx - 1)
		{
			next_node = prev_node->next;
			prev_node->next = new_node;
			new_node->next = next_node;
		}
		prev_node = prev_node->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	return (new_node);
}
