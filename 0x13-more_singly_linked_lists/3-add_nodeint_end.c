#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list.
 * @head: duoble pointer to head.
 * @n: Value of the elements, an integer.
 * Return: Adress of the new element or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *last_node;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	if (*head == NULL)
		*head = tmp;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = tmp;
	}
	return (tmp);
}
