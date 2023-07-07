#include "hash_tables.h"

/**
 * hash_table_set - Insert a key/value pair into a hash table.
 * @ht: The hash table to insert into.
 * @key: The key of the pair to insert.
 * @value: The value of the pair to insert.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *value_cp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_cp;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
