#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of the linked list.
 * @head: double pointer to first node.
 * @str: pointer to a string.
 * Return: the adress of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (!head)
		return (NULL);
	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
