#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a linked dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Value of the new node.
 * Return: The address of the new node in the list or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	new_node->prev = last_node;

	return (new_node);
}
