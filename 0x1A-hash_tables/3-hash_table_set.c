#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - Creates a new node
 * @key: The key for the new node
 * @value: The value for the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key. Key can't be an empty string
 * @value: The value associated with the key. Value must be duplicated
 *         Value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	/* Check if key already exists, if yes, update the value */
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	/* Key does not exist, create a new node */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	/* Add the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

