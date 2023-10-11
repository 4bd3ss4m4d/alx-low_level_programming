#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
*/
int jump_search(int *array, size_t size, int value)
{
	int index, l, m, previous;

	if (array == NULL || size == 0)
	{
		return (-1);
	}


	previous = index = 0;
	l = (int)sqrt((double)size);
	m = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
		m++, previous = index,  index = m * l;
	} while (index < (int)size && array[index] < value);
	printf("Value found between indexes [%d] and [%d]\n", previous, index);
	for (; previous <= index && previous < (int)size; previous++)
	{
		printf("Value checked array[%d] = [%d]\n", previous, array[previous]);
		if (array[previous] == value)
		{
			return (previous);
		}
	}

	return (-1);
}
