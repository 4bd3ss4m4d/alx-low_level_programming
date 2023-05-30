#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the FizzBuzz program
 *
 * Description: This program prints the numbers from 1 to 100, replacing
 *	      multiples of three with "Fizz", multiples of five with "Buzz",
 *	      and multiples of both three and five with "FizzBuzz". Each
 *	      number or word is separated by a space.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
