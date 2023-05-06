#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, src_len = 0, i;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	for (i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
