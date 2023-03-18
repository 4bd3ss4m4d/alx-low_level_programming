#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 48; first_digit < 58; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit < 58; second_digit++)
		{
			putchar(first_digit);
			putchar(second_digit);
			if (first_digit < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
