#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 * * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i, l;

	for (i = 0; i < 10; i++)
	{
		l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
	}
}
