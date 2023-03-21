#include "main.h"
/**
 * print_alphabet - Prints the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	int l;

	l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
