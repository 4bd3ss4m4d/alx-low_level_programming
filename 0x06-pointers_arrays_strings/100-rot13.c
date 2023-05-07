#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to a string
 *
 * Return: Pointer to encoded string
 */
char *rot13(char *s)
{
	char *mapping_from, *mapping_to;
	int i, j;

	mapping_from = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	mapping_to = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; mapping_from[j] != '\0'; j++)
		{
			if (s[i] == mapping_from[j])
			{
				s[i] = mapping_to[j];
				break;
			}
		}
	}

	return (s);
}
