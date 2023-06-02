#include "main.h"

/**
 * wildcmp - Compares two strings and checks if they are identical, considering
 *	     the special character *
 * @s1: The 1st string to be compared
 * @s2: The 2nd string to be compared, which can contain the special
 *      character *
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		return (wildcmp(s1, s2 + 1));
	}

	if (*s1 != '\0' && (*s1 == *s2))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
