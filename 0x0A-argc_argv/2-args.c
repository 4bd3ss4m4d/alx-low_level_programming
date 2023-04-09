#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: The number of command-line arguments provided
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: Always 0
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
