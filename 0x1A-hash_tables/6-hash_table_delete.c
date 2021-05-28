#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht:  is the hash table you want to delete.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *to_delete;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			to_delete = current;
			current = current->next;

			free(to_delete->value);
			free(to_delete->key);
			free(to_delete);
		}
	}

	free(ht->array);
	free(ht);
}
