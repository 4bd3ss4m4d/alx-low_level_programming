#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked
 *                            list
 * @head: pointer to the pointer of the head of the list
 * @index: index of the node to be deleted (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed (e.g., invalid index)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (index == count)
		{
			if (current->next == NULL)
			{
				current->prev->next = NULL;
				free(current);
				return (1);
			}
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}

	return (-1);
}
