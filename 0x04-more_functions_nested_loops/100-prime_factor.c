#include "main.h"
#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: This program finds and prints the largest prime factor of the
 *	        number 612852475143, followed by a new line.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	long int num = 612852475143, largest_factor;

	for (largest_factor = 2; largest_factor < num; largest_factor++)
	{
		if (num % largest_factor == 0)
		{
			num /= largest_factor;
		}
	}
	printf("%ld\n", largest_factor);

	return (0);
}
