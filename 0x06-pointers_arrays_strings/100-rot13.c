#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: pointer to a string
 *
 * Return: Pointer to encoded string
 */

char *rot13(char *s)
{
	char *in, *out;
	int i, j;

	in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
				break;
			}
		}
	}

	return (s);
}
