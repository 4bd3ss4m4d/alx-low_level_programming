#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the size of various types on the computer
 *	        it is compiled and run on.
 *
 * Return: Always returns 0 to indicate successful execution
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
