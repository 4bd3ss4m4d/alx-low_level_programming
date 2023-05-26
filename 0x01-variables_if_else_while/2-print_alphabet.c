#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet using the putchar
 *		function.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
