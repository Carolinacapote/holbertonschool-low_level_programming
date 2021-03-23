#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: Double pointer to head.
 * Return: The head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *delete;

	if (*head == NULL)
		return (0);
	tmp = *head;
	delete = tmp;
	*head = tmp->next;
	return (delete->n);
}
