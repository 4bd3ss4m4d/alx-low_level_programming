#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Calculates the sum of all data values in a linked list
 * @head: Pointer to the head node of the linked list
 *
 * Return: Sum of all data values in the linked list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
