#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table and its contents.
 * @ht: The hash table to delete.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *node, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(hd->array);
	free(hd);
}
