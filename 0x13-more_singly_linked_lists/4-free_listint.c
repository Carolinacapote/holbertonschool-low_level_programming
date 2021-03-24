#include "lists.h"
/**
 * free_listint - Frees a list.
 *@head: Pointer to the head.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

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
