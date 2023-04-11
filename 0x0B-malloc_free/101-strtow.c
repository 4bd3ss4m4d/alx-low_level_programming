#include "main.h"
#include <stdlib.h>

int count_words(char *s);

/**
 * strtow - splits a string into words
 *
 * @str: the input string to split
 *
 * Return: pointer to an array of strings (words)
 * or NULL if it fails
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
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
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}

/**
 * count_words - counts the number of words in a string
 *
 * @s: the input string
 *
 * Return: The number of words in the string
 */

int count_words(char *s)
{
	int i;
	int slen, n_words;

	slen = 0;
	n_words = 0;

	while (s[slen] != '\0')
	{
		slen++;
	}

	for (i = 0; i < slen; i++)
	{
		if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
		{
			n_words++;
		}
	}

	return (n_words);
}
