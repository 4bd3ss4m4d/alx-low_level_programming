#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int dest_length;
	int src_length;
	int i;

	dest_length = 0;
	src_length = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (src[src_length] != '\0')
	{
		src_length++;
	}

	for (i = 0; i < src_length; i++)
	{
		*(dest + dest_length + i) = *(src + i);
	}

	*(dest + dest_length + i) = '\0';

	return (dest);
}
