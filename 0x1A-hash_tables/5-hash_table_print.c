#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht:  is the hash table you want to print.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	char *comma = "";
	unsigned long int i = 0;

	printf("{");

	for (; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			printf("%s", comma);
			comma = ", ";
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}

	printf("}\n");
}
