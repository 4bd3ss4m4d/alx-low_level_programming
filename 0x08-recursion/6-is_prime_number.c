#include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - checks if number has divisors
 *
 * @n: an integer
 *
 * Return:  1 if @n is an integer is a prime number, otherwise  0
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 3));
	}
}

/**
 * is_prime_helper - checks if a number is prime by checking its divisors
 * @n: an integer
 * @divisor: an integer that represents the current divisor to be checked
 *
 * Return: 0 if the number is not prime, 1 if it is
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, divisor - 1));
	}
}
