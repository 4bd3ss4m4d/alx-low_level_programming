#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0 (success)
 */

int main(void)
{
	long int num = 612852475143;
	long int largest_factor;

	for (largest_factor = 2; largest_factor < num; largest_factor++)
	{
		if (num % largest_factor == 0)
		{
			num = num / largest_factor;
		}
	}

	printf("%ld\n", largest_factor);

	return (0);
}

