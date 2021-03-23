#include "lists.h"
/**
 * get_nodeint_at_index - returns the node of a linked list in "n" location.
 * @head: pointer to head.
 * @index: location number.
 * Return: Node in index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
