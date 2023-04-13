#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int check_digits(char *str);
int _strlen(char *str);
void print_error(void);

/**
 * main - multiplies two positive numbers
 *
 * @argc: The number of command-line arguments provided
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, carry, digit1, digit2, *result, is_non_zero = 0;

	num1 = argv[1], num2 = argv[2];

	if (argc != 3 || !check_digits(num1) || !check_digits(num2))
		print_error();

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);

	if (!result)
		return (1);

	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = num1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			is_non_zero = 1;
		if (is_non_zero)
			putchar(result[i] + '0');
	}

	if (!is_non_zero)
		putchar('0');
	putchar('\n');

	free(result);

	return (0);
}

/**
 * check_digits - checks if a string contains only digits
 *
 * @str: string to be evaluated
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */

int check_digits(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 *
 * @str: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * print_error - handles errors for main function
 *
 * Return: void
 */

void print_error(void)
{
	printf("Error\n");
	exit(98);
}

