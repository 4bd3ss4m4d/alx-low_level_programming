#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14, repeated 10 times,
 *		  followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, d;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d < 15; d++)
		{
			if (d > 9)
				_putchar((d / 10) + '0');
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
