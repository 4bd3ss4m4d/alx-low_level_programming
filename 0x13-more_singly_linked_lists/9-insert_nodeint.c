#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a linked
 *			     list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be stored in the new node.
 *
 * Return: Address of the new node on success, or NULL if it failed.
 *	   If it's not possible to add the new node at index idx, do not add it
 *	   and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head, *previous = NULL;
	unsigned int count = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	while (current != NULL && count < idx)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (count != idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current;
	if (previous == NULL)
	{
		*head = new_node;
	}
	else
	{
		previous->next = new_node;
	}

	return (new_node);
}
