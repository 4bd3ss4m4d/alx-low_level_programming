#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int first_digit, second_digit, third_digit;

	for (first_digit = 48; first_digit < 58; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit < 58; second_digit++)
		{
			for (third_digit = second_digit + 1; third_digit < 58; third_digit++)
			{
				putchar(first_digit);
				putchar(second_digit);
				putchar(third_digit);
				if (first_digit < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
