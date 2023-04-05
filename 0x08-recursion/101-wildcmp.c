#include "main.h"

/**
 * wildcmp - checks if two strings are identical
 *
 * @s1: first string
 * @s2: second string, which can contain '*'
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);

		return (wildcmp(s1, s2 + 1));
	}

	if (*s1 != '\0' && (*s1 == *s2))
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
