#include "hash_tables.h"

/**
 * hash_djb2 - Compute the hash value of a string using the djb2 algorithm.
 * @str: The input string to compute the hash value of.
 *
 * Return: The computed hash value as an unsigned long integer.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
