#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Get the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Modulo operation to get the index within the array size */
	return (hash_value % size);
}

