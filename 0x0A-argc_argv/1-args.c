#include <stdio.h>


/**
 * main - Entry point of the program
 * @argc: The number of command line arguments including the program name
 * @argv: An array of strings containing the command line arguments
 *
 * Description: This program prints the number of arguments passed into it.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", (argc - 1));

	return (0);
}
