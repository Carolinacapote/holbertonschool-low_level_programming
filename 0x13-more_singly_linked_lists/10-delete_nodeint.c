#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node in index position of the list.
 * @head: double pointer to head.
 * @index: POsition of the node to be deleted.
 * Return: 1 if it succeeded or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *delete;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	delete = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	i = 0;
	while (delete->next != NULL)
	{
		prev = delete;
		delete = delete->next;
		if (i == index - 1)
		{
			prev->next = delete->next;
			free(delete);
			return (1);
		}
		i++;
	}
	return (-1);
}
