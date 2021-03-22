#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: Double pointer to head.
 * Return: The head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (*head == NULL)
		return (0);
	tmp = *head;
	if (tmp != NULL && tmp->n == i)
		*head = tmp->next;
	return (tmp->n);
}
