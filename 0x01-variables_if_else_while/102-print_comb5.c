#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates and prints all possible combinations
 *	        of three digits satisfying the following conditions:
 *	        - The digits must be different.
 *	        - The smallest combination of three digits is printed.
 *	        - Numbers are printed in ascending order with three digits.
 *	        - Each number is separated by a comma and a space.
 *	        - The putchar function is used for output, and no other
 *		  output functions are allowed.
 *	        - The code uses a maximum of six putchar function calls.
 *	        - No variables of type char are used.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98)
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
