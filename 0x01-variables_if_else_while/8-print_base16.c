#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
