#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int digit;

	/* ASCII code of 0 is 48 */
	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
