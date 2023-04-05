#include "main.h"

int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to compute the square root of
 *
 * Return: square root of n,
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - finds the natural square root of a number
 *
 * @n: the number to find the square root of
 * @guess: the current guess
 *
 * Return: the square root of n
 */

int find_sqrt(int n, int guess)
{
	if (n < 0 || guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (find_sqrt(n, guess + 1));
}
