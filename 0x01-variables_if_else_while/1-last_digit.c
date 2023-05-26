#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and prints its last
 *	        digit. The output of the program includes the string
 *	        "Last digit of", followed by the value of n, followed by
 *	        the string "is", and finally the classification of the last
 *	        digit based on its value. The classification can be "and is
 *	        greater than 5" if the last digit is greater than 5, "and
 *	        is 0" if the last digit is 0, or "and is less than 6 and
 *	        not 0" if the last digit is less than 6 and not equal to 0.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	else if ((n % 10) == 0)
	printf("Last digit of %i is %i and is 0\n", n, n % 10);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
