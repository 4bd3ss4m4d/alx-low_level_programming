#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int count_words(char *str);

/**
 * strtow - Splits a string into words.
 * @str: Pointer to the input string to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL if str is NULL or
 *	 empty, or if the function fails to allocate memory.
 *	 Each element of the array contains a single word, null-terminated.
 *	 The last element of the array is NULL.
 */
char **strtow(char *str)
{
	char **rows, *tmp;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	rows = (char **)malloc(sizeof(char *) * (words + 1));
	if (rows == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				rows[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	rows[j] = NULL;

	return (rows);
}

/**
 * count_words - Counts the number of words in a string
 * @str: Pointer to the input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}

	return (count);
}
