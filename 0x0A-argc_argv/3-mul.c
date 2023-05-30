#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments including the program name
 * @argv: An array of strings containing the command line arguments
 *
 * Description: This program multiplies two numbers provided as command line
 *	        arguments. It prints the result of the multiplication followed
 *	        by a new line.
 *	        If the program does not receive two arguments, it prints
 *	        "Error" followed by a new line and returns 1.
 *
 * Return: 0 if multiplication is successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
