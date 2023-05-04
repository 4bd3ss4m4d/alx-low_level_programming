#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from
 *	     one number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that differ between n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		bits += xor_result & 1;
		xor_result >>= 1;
	}

	return (bits);
}
