#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program computes and prints the sum of all the multiples
 *	        of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}

	printf("%d\n", result);

	return (0);
}
