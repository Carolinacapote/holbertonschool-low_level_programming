#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: Double pointer to head.
 * Return: The head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (*head == NULL)
		return (0);
	number = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (number);
}
