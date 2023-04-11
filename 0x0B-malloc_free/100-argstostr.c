#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: pointer to a newly allocated string containing the concatenated
 * arguments
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int size;
	char *conc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, size = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++; /* taking into consideration '\n' */
	}

	conc = malloc(sizeof(char) * (size + 1));

	if (conc == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			conc[k] = av[i][j];
			k++;
		}
		conc[k] = '\n';
		k++;
	}
	conc[k] = '\0';

	return (conc);
}
