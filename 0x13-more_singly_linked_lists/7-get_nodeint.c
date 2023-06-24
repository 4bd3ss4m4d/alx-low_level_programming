#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to retrieve (starting at 0).
 *
 * Return: Pointer to the nth node on success, or NULL if the node does not
 *	 exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (index == count)
		{
			return (current);
		}

		current = current->next;
		count++;
	}

	return (NULL);
}
