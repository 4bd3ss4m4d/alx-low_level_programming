#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value for the array.
 * @max: The maximum value for the array.
 *
 * Return: Pointer to the newly created array of integers.
 *	   If min > max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ptr, size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
