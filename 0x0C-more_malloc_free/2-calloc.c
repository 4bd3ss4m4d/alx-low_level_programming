#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, (nmemb * size));

	return (ptr);
}

/**
 * _memset - fills a memory area with a constant byte
 *
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to be used to fill the memory area
 * @n: the number of bytes to be filled with the constant byte
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
