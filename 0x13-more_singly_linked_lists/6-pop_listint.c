#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int deleted_data;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	deleted_data = temp->n;
	free(temp);

	return (deleted_data);
}
