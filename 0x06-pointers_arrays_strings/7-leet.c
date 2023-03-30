#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: pointer to a string
 *
 * Return: Pointer to encoded string
 */

char *leet(char *s)
{
	char *leet, *encoding;
	int i, j;

	leet = "oOlLeEaAtT";
	encoding = "0011334477";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = encoding[j];
			}
		}
	}

	return (s);
}
