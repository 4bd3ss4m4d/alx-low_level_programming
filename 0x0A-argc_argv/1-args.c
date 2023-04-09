#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: The number of command-line arguments provided
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", (argc - 1));
	return (0);
}
