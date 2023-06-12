#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - Allocates memory for an array and sets it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory block.
 *	   If nmemb or size is 0, or if malloc fails, returns NULL.
 *	   The allocated memory is set to zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	_memset(ptr, 0, (nmemb * size));

	return (ptr);
}

/**
 * _memset - fills a memory area with a constant byte
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
	{
		s[i] = b;
	}

	return (s);
}
