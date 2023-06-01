#include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Checks if a number is prime by recursively checking its
 *		     divisors
 * @n: The number to be checked
 * @i: The current divisor to be checked
 *
 * Return: 0 if the number is not prime, 1 if it is prime
 */
int is_prime_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime_helper(n, i + 1));
}
