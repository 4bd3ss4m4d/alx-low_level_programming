#include "main.h"

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
