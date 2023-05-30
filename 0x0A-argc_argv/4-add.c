#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments including the program name
 * @argv: An array of strings containing the command line arguments
 *
 * Description: This program adds positive numbers provided as command line
 *	        arguments.
 *	        It prints the result of the addition followed by a new line.
 *	        If no number is passed to the program, it prints 0 followed
 *	        by a new line.
 *	        If one of the numbers contains symbols that are not digits,
 *	        it prints "Error" followed by a new line and returns 1.
 *
 * Return: 0 if addition is successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
