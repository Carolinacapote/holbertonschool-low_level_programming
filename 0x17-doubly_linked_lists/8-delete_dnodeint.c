#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: Double pointer to the head of the list.
 * @index: is the index of the node to be deleted and it starts at 0.
 * Return: 1 on success, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev_node, *delete;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	delete = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(delete);
		return (1);
	}

	while (delete != NULL)
	{
		prev_node = delete;
		delete = delete->next;
		if (i == index - 1)
		{
			prev_node->next = delete->next;
			free(delete);
			return (1);
		}
		i++;
	}
	return (-1);
}
