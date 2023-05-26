#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: string containing the characters to be matched
 *
 * Return: the number of bytes in the initial segment of s
 *	 that consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				break;
		if (!accept[j])
			break;
	}

	return (i);
}
