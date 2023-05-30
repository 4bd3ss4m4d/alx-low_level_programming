#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments provided
 * @argv: An array of pointers to the command-line arguments
 *
 * Description: The program retrieves its own name from the command line
 *	        arguments and prints it, including the path before the name if
 *	        provided.
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
