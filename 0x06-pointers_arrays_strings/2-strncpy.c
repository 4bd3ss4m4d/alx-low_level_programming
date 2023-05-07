#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be copied from src to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, src_len = 0;

	while (src[src_len] != '\0')
		src_len++;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
