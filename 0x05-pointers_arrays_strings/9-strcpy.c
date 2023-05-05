#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 *	   including the terminating null byte (\0),
 *	   to the buffer pointed to by dest
 * @dest: pointer to the destination buffer where the string will be copied to
 * @src: pointer to the source string that will be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
