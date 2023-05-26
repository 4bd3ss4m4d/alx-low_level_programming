#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints the string "_putchar" followed by a new
 *              line.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
