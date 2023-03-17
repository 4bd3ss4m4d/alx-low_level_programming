#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int digit;

	/* 0 in ASCII code is 48 and 9 is 57 */
	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
	return (0);
}
