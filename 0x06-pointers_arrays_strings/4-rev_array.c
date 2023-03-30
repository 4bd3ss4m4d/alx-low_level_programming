#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 *
 * @a: pointer to the array of integers
 * @n: the number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
