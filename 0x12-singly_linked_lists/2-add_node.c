#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and added as the data of the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	new_node->str = strdup(str);
	new_node->len = str_len;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
