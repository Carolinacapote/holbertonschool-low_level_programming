#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees the list.
 * @head: Pointer to the head.
 * Return: Number of nodes.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		free(tmp->str);
	}
	free(head);
}
