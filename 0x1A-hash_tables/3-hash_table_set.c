#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:  is the hash table you want to add or update the key/value to.
 * @key: is the key to added. Key must be dupicated "strdup"
 * @value: is the value of the key. value must be duplicated "strdup"
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, index;
	hash_node_t *new_item, *current;

	if (!key || !ht)
		return (0);

	hash = hash_djb2((unsigned char *)key);
	index = hash % ht->size;
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new_item = malloc(sizeof(hash_node_t));
	if (!new_item)
		return (0);

	new_item->key = strdup(key);
	new_item->value = strdup(value);
	new_item->next = ht->array[index];
	ht->array[index] = new_item;

	return (1);
}
