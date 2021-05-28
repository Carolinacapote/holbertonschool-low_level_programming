#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table.
 * @size: of the array
 * Return: A pointer to the newly created hash table or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size == 0)
		size++;

	hash_table = malloc(sizeof(hash_table_t) * size);
	if (!hash_table)
		return (NULL);

	return (hash_table);
}
