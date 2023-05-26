#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 *		    matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, main_diag_sum = 0, anti_diag_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_diag_sum += a[i * size + i];
		anti_diag_sum += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", main_diag_sum, anti_diag_sum);
}
