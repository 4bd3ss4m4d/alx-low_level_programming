#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments including the program name
 * @argv: An array of strings containing the command line arguments
 *
 * Description: This program calculates the minimum number of coins needed to
 *	        make change for an amount of money given in cents. The amount
 *	        of cents is provided as a command line argument. It prints the
 *	        minimum number of coins required, followed by a new line.
 *
 * Return: 0 if calculation is successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, result, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]);

	if (result <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (result >= coins[i])
		{
			result -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
