#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments including the program name
 * @argv: An array of strings containing the command line arguments
 *
 * Description: This program prints all the arguments it receives.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
