#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: The number of command-line arguments provided
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
