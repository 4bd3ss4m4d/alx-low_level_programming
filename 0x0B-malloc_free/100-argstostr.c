#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: number of arguments
 * @av: array of argument strings
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size;
	char *conc_ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0, size = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++; /* taking into consideration '\n' */
	}

	conc_ptr = malloc(sizeof(char) * (size + 1));
	if (conc_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			conc_ptr[k++] = av[i][j];
		}
		conc_ptr[k++] = '\n';
	}
	conc_ptr[k] = '\0';

	return (conc_ptr);
}
