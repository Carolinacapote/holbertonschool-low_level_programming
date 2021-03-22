#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list.
 * @head: Double pointer to head.
 * @n: values, integers in the nodes.
 * Return: Adress of the new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	if (!head)
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
