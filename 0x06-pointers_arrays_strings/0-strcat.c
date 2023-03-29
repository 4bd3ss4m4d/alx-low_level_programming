#include "main.h"
#include <string.h>

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

	dest_length = strlen(dest);

	while (*src != '\0')
	{
		*(dest + dest_length) = *src;
		dest_length++;
		src++;
	}

	*(dest + dest_length) = '\0';

	return (dest);
}
