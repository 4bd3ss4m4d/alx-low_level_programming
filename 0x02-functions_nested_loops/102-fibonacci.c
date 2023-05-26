#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the first 50 Fibonacci numbers, starting
 *	        with 1 and 2, separated by comma and space, followed by a new line.
 *	        It utilizes the Fibonacci sequence to generate the numbers.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; ++count)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
