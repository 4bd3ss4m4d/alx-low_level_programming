#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: pointer to the string
 * Return: void
 */

void puts2(char *str)

{
	int i;

	for (i = 0; *str != '\0'; i++, str++)
	{

		if (i % 2 == 0)
		{
			_putchar(*str);
		}
	}

	_putchar('\n');
}

