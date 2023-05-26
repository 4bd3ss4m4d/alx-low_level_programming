#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
