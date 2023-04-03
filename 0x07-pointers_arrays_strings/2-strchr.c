#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to the string to search
 * @c: the character to search for
 *
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{

	unsigned int length;
	unsigned int i;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i <= length; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}

