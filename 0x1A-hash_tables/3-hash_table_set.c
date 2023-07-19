#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds a key/value pair to the hash table.
 * @ht: The hash table to add/update the key/value pair.
 * @key: The key to be added to the hash table. It cannot be an empty string.
 * @value: The value associated with the key. It will be duplicated.
 *	 It can be an empty string.
 *
 * Return: 1 if the operation is successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists in the Hash table */
	for (i = index; ht->array[i] != NULL; i++)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			/* Update the value associated with they key */
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	/* If they key does not exist, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	/* Add node at the beginning of the linked list */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
