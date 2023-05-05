#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the address of the 1st integer
 * @b: the address of the 2nd integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
