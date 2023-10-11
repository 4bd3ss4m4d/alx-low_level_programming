#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, j, k;

	if (array == NULL)
	{
		return (-1);
	}

	for (j = 0, k = size - 1; k >= j;)
	{
		i = j + (((double)(k - j) / (array[k] - array[j])) * (value - array[j]));
		if (i < size)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			k = i - 1;
		}
		else
		{
			j = i + 1;
		}
	}
	return (-1);
}
