#include "main.h"

/**
 * factorial - the factorial of a given number
 *
 * @n: the number to compute the factorial of
 *
 * Return: length of the string
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
