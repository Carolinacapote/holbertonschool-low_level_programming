#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:  is the hash table you want to add or update the key/value to.
 * @key: is the key to added.
 * @value: is the value associated with the key. value must be duplicated.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, index;
	hash_node_t *new_node;

	if (!key)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	hash = hash_djb2((unsigned char *)key);
	index = hash % ht->size;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}

	else
	{
		new_node->next = ht->array[0];
		ht->array[0] = new_node;
		return (1);
	}

	return (0);
}
