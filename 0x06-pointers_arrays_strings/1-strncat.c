#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be copied from src to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; (src[j] != '\0') && (j < n); j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
