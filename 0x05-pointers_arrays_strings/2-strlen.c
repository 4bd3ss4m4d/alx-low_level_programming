#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to compute the length of
 *
 * Return: the length of the string pointed to by s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
