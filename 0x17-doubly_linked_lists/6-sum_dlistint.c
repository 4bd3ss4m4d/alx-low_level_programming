#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked
 *                list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) of the linked list, or 0 if the list is
 *         empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int result = 0;

	while (current != NULL)
	{
		result += current->n;

		current = current->next;
	}

	return (result);
}
