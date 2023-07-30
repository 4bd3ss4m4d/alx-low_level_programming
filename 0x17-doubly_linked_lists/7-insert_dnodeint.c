#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added (starting from 0)
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			if (current->next == NULL)
				return (add_dnodeint_end(h, n));
			new_node->next = current->next;
			new_node->prev = current;
			current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
