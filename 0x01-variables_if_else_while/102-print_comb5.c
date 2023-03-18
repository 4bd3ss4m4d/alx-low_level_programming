#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int digit_1, digit_2;

	for (digit_1 = 0; digit_1 < 100; digit_1++)
	{
		for (digit_2 = 0; digit_2 < 100; digit_2++)
		{
			if (digit_1 < digit_2)
			{
				putchar((digit_1 / 10) + 48);
				putchar((digit_1 % 10) + 48);
				putchar(' ');
				putchar((digit_2 / 10) + 48);
				putchar((digit_2 % 10) + 48);
				if (digit_1 != 98 || digit_2 != 99)
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
