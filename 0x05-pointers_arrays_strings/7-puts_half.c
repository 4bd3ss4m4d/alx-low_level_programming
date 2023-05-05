#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, half, i;

	while (str[len] != '\0')
		len++;

	half = (len - 1) / 2;

	for (i = half + 1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
