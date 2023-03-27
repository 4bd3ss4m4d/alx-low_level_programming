#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string to print
 * Return: void
 */

void puts_half(char *str)

{
	int length;
	int half;
	int i;

	length = strlen(str);

	half = (length - 1) / 2;

	for (i = half + 1; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

