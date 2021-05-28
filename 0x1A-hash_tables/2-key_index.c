#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: is the key to be used.
 * @size: is the seze of the array of the hash table.
 * Return: The index of the key/value pair.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2((unsigned char *)key);
	index = hash % size;

	return (index);
}
