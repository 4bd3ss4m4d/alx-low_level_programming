#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value for the array (included)
 * @max: maximum value for the array (included)
 *
 * Return: pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int len;
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}
