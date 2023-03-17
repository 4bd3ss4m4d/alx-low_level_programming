#include <stdio.h>
/**
 * main - Prints all letters of the alphabet except e and q
 * Return: 0
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');
	return (0);
}
