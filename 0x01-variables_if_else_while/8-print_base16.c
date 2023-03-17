#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char hex_digit;

	for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
	{
		putchar(hex_digit);
	}

	for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
	{
		putchar(hex_digit);
	}

	putchar('\n');
	return (0);
}
