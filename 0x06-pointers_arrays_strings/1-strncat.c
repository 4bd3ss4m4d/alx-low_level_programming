#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be copied from src to dest
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length;

	int i;

	dest_length = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		*(dest + dest_length + i) = *(src + i);
	}

	*(dest + dest_length + i) = '\0';

	return (dest);
}

