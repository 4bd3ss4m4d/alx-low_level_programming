#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: The number of command-line arguments provided
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: Always 0
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
