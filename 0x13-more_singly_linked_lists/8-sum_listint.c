#include "lists.h"
/**
 * sum_listint - Function that returns the sum of the data of the linked list.
 * @head: Pointer to head.
 * Return: the sum of all the data(n).
 */
int sum_listint(listint_t *head)
{
	int i;
	int sum;

	if (head == NULL)
		return (0);
	i = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
