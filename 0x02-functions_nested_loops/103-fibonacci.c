#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program finds and prints the sum of the even-valued terms
 *	      in the Fibonacci sequence whose values do not exceed 4,000,000.
 *	      It utilizes the Fibonacci sequence to generate the numbers and
 *	      calculates the sum of even-valued terms.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	unsigned long term_count, prev_term = 0, curr_term = 1, next_term, sum = 0;

	for (term_count = 0; term_count < 50; term_count++)
	{
		next_term = prev_term + curr_term;
		prev_term = curr_term;
		curr_term = next_term;

		if (next_term % 2 == 0 && next_term < 4000000)
			sum += next_term;
	}

	printf("%lu\n", sum);

	return (0);
}
