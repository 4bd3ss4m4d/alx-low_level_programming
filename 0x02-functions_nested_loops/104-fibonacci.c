#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program finds and prints the first 98 Fibonacci numbers
 *              starting with 1 and 2.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int i;
	unsigned long curr_fib = 0, next_fib = 1, sum;
	unsigned long curr_fib_half1, curr_fib_half2, next_fib_half1, next_fib_half2;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		sum = curr_fib + next_fib;
		printf("%lu, ", sum);
		curr_fib = next_fib;
		next_fib = sum;
	}
	curr_fib_half1 = curr_fib / 10000000000;
	next_fib_half1 = next_fib / 10000000000;
	curr_fib_half2 = curr_fib % 10000000000;
	next_fib_half2 = next_fib % 10000000000;
	for (i = 93; i < 99; i++)
	{
		half1 = curr_fib_half1 + next_fib_half1;
		half2 = curr_fib_half2 + next_fib_half2;
		if (curr_fib_half2 + next_fib_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");
		curr_fib_half1 = next_fib_half1;
		curr_fib_half2 = next_fib_half2;
		next_fib_half1 = half1;
		next_fib_half2 = half2;
	}
	printf("\n");

	return (0);
}
