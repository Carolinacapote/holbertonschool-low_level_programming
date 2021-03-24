#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: double pointer to head.
 * @idx: iindex of the list where the new node should be added.
 * @n: Value of the new node
 * Return: Address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *previous, *next;
	unsigned int i;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	previous = *head;
	i = 0;
	while (previous != NULL)
	{
		if (i == idx - 1)
		{
			next = previous->next;
			previous->next = new_node;
			new_node->next = next;
		}
		previous = previous->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	return (new_node);
}
