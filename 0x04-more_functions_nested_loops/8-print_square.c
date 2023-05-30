#include "main.h"

/**
 * print_square - Prints a square of a given size using the '#' character.
 * @size: The size of the square.
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r, c;

		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
