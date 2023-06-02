#include "main.h"

int check_palindrome(char *s, int i, int j);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (!*s)
	{
		return (1);
	}

	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string to be checked
 * @i: Starting index
 * @j: Ending index
 *
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}

	return (check_palindrome(s, i + 1, j - 1));
}

/**
 * _strlen_recursion - Calculates the length of a string
 * @s: Pointer to the string for which the length is to be calculated
 *
 * Return: The length of the string `s`
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
