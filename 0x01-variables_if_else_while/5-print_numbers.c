#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10,
 *	        starting from 0, followed by a new line.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		printf("%i", d);
	printf("\n");

	return (0);
}
