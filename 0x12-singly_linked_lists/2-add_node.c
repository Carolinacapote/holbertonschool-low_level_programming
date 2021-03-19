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
	tmp->len = _strlen(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
