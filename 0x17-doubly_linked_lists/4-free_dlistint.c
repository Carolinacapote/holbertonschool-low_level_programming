#include "lists.h"
/**
 * dlistint_len - Function that frees a linked dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		free(head);

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
