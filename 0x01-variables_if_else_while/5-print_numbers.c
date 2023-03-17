#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%i", digit);
	}

	printf("\n");
	return (0);
}

