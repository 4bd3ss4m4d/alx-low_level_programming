#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 *
 * @s: pointer to a string
 *
 * Return: pointer to the string with all lowercase letters converted
 * to uppercase
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/* Uppercase letter are 32 places away from lowercase letters */
			/* in ASCII Table */
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
