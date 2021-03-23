#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen - Function that returns the length of a string.
 *@s: String to be used.
 *
 * Return: Length of a string.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - Adds a new node at the end of the linked list.
 * @head: double pointer to first node.
 * @str: pointer to a string.
 * Return: the adress of the new element or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *last_node;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	if (*head == NULL)
		*head = tmp;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = tmp;
	}
	tmp->next = NULL;
	return (tmp);
}
