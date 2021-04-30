#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all elements of a linked dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: the sum of the elements in the list or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0, sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n,
		head = head->next;
		i++;
	}
	return (sum);
}
