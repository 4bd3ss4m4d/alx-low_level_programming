#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates and prints all possible combinations
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
	int d1, d2, d3;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = d1 + 1; d2 <= '9'; d2++)
		{
			for (d3 = d2 + 1; d3 <= '9'; d3++)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);
				if (d1 < '7')
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
