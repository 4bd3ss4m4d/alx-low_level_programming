#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *	     containing a copy of the string given as a parameter.
 * @str: pointer to the input string
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL or
 *	 if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
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
