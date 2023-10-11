#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm - only first index
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (advanced_binary_recur(array, 0, size - 1, value));
}

/**
 * advanced_binary_recur - searches for a value in a sorted array of
 * integers using the Binary search algorithm - recursive
 * @array: pointer to the first element of the array to search in
 * @left: left index
 * @right: right index
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
*/
int advanced_binary_recur(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (right < left)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (index = left; index < right; index++)
	{
		printf("%d, ", array[index]);
	}
	printf("%d\n", array[index]);
	index = left + (right - left) / 2;
	if (array[index] == value && (index == left || array[index - 1] != value))
	{
		return (index);
	}
	if (array[index] >= value)
	{
		return (advanced_binary_recur(array, left, index, value));
	}

	return (advanced_binary_recur(array, index + 1, right, value));
}
