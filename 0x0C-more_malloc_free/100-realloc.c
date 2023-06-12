#include "main.h"
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory block previously allocated with malloc.
 * @old_size: Size of the allocated space in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the reallocated memory block.
 *	   If new_size is equal to old_size, returns ptr.
 *	   If new_size is zero and ptr is not NULL, frees the memory and
 *	   returns NULL.
 *	   If malloc fails to allocate the new memory block, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		old_size = new_size;
	}
	_memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
