#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  creates a duplicate of a string in a new memory block
 *
 * @str: pointer to the string to be duplicated
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int size, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}

	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
