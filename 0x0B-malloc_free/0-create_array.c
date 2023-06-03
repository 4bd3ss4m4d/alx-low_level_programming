#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific
 *		  char
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str_ptr;

	if (size == 0)
	{
		return (NULL);
	}

	str_ptr = (char *)malloc(sizeof(char) * size);

	if (str_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str_ptr[i] = c;
	}

	return (str_ptr);
}
