#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	size_t n;
	const listint_t *tmp = NULL;
	const listint_t *node = NULL;


	tmp = head;

	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		c++;
		tmp = tmp->next;
		node = head;
		n = 0;

		while (n < c)
		{
			if (tmp == node)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (c);
			}
			node = node->next;
			n++;
		}
		if (!head)
			exit(98);
	}
	return (c);
}
