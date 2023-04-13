#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to a newly allocated space or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2;
	char *conc;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = 0, len_s2 = 0;

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	conc = malloc(sizeof(char) * (len_s1 + n + 1));

	if (conc == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		conc[i] = s1[i];
	for (j = 0; j < n; j++)
		conc[i + j] = s2[j];
	conc[i + j] = '\0';

	return (conc);
}
