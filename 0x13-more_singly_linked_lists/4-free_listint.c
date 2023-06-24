#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
