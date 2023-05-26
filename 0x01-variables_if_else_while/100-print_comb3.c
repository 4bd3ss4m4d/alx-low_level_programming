#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates and prints all possible combinations
 *	        of two digits satisfying the following conditions:
 *	        - The digits must be different.
 *	        - The smallest combination of two digits is printed.
 *	        - Numbers are printed in ascending order with two digits.
 *	        - Each number is separated by a comma and a space.
 *	        - The putchar function is used for output, and no other
 *		  output functions are allowed.
 *	        - The code uses a maximum of five putchar function calls.
 *	        - No variables of type char are used.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int d1, d2;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = d1 + 1; d2 <= '9'; d2++)
		{
			putchar(d1);
			putchar(d2);
			if (d1 < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
