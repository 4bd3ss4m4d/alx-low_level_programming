#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to compute the absolute value for.
 *
 * Return: The absolute value of the integer 'n'.
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
