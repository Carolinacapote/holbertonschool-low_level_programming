#include "lists.h"
/**
 * free_listint2 - Function that frees a list and sets the head to NULL.
 * @head: Double pointer to head.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp_2;

	while (*head != NULL)
	{
		tmp = *head;
		while (tmp != NULL)
		{
			tmp_2 = tmp;
			tmp = tmp->next;
			free(tmp_2);
		}
		*head = NULL;
	}
}
