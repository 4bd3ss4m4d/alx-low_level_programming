#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, r;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	r = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, r);

	return (_binary_search(array, i / 2, r, value));
}

/**
 * _binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
*/
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (array == NULL)
	{
		return (-1);
	}
	while (right >= left)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
		{
			printf("%d, ", array[index]);
		}
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;
		if (array[index] == value)
		{
			return (index);
		}
		if (array[index] > value)
		{
			right = index - 1;
		}
		else
		{
			left = index + 1;
		}
	}
	return (-1);
}
