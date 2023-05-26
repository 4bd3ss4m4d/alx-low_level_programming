#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10,
 *	        starting from 0, followed by a new line.
 *	        It accomplishes this without using any variable of type char.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
