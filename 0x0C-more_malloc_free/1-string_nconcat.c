#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated space in memory containing the
 *	   concatenated string.
 *	   If the function fails, it returns NULL.
 *	   If n is greater or equal to the length of s2, the entire string s2
 *	   is concatenated.
 *	   If NULL is passed, it is treated as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, size, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;

	while (s2[len_s2])
		len_s2++;
	if (n >= len_s2)
		n = len_s2;

	size = len_s1 + n + 1;
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
