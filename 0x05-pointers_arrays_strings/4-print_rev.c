#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int length;

	length = strlen(s);

	while (--length >= 0)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}
