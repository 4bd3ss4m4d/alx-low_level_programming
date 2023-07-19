#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array for the hash table.
 *
 * Return: A pointer to the newly created hash table.
 *         If there is an error in memory allocation, or if the size provided
 *         is 0, the function returns NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
