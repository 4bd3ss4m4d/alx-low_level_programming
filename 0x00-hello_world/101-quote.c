#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the string "and that piece of art is
 *	      useful" - Dora Korpar, 2015-10-19," to the standard error
 *	      stream.
 *
 * Return: Always returns 1 to indicate an error
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
