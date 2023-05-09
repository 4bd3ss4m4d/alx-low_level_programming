#include "main.h"
#include <stdio.h>

int _strlen(char *s);
void rev_string(char *s);

/**
 * infinite_add - prints an integer
 * @n1: pointer to the 1st number represented as a string
 * @n2: pointer to the 2nd number represented as a string
 * @r: pointer to a character array that will store the result
 * @size_r: size of the character array r in bytes
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = _strlen(n1), len_n2 = _strlen(n2);
	int i = len_n1 - 1, j = len_n2 - 1, k = 0;
	int carry = 0, sum = 0;
	int digit1, digit2;

	if (len_n1 >= size_r || len_n2 >= size_r)
		return (0);

	while (i >= 0 || j >= 0 || carry == 1)
	{
		digit1 = i >= 0 ? n1[i] - '0' : 0;
		digit2 = j >= 0 ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		i--, j--, k++;
	}
	r[k] = '\0';

	if (k > size_r - 1)
		return (0);

	rev_string(r);

	return (r);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to compute the length of
 *
 * Return: the length of the string pointed to by s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j = 0;
	char temp;

	while (s[j] != '\0')
		j++;

	for (i = 0, j -= 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
