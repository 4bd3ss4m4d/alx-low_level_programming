#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 *                Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 *       in array or if array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
	int i = recursive_search(array, size, value);

	if (i >= 0 && array[i] != value)
	{
		return (-1);
	}

	return (i);
}

/**
 * recursive_search - searches for a value in a sorted array of integers using
 *                   the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 *      in array or if array is NULL
*/
int recursive_search(int *array, size_t size, int value)
{
	size_t h = size / 2, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	printf("Searching in array");
	for (i = 0; i < size; i++)
	{
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	}
	printf("\n");

	if (h && size % 2 == 0)
	{
		h--;
	}

	if (value == array[h])
	{
		return ((int)h);
	}
	if (value < array[h])
	{
		return (recursive_search(array, h, value));
	}
	h++;

	return (recursive_search(array + h, size - h, value) + h);
}
