#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to the first input string
 * @s2: pointer to the second input string
 *
 * Return: pointer to a newly allocated space in memory
 * containing the concatenated string, or NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2;
	char *conc;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	{
		;
	}
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
	{
		;
	}

	conc = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (conc == NULL)
	{
		free(conc);
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j <= len_s2; j++)
	{
		conc[i++] = s2[j];
	}

	return (conc);
}
