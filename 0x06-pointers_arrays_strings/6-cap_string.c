#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: pointer to a string
 *
 * Return: pointer to the string with all words capitalized
 */

char *cap_string(char *s)
{
	char *sep;
	int i, j;

	sep = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
