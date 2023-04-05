#include "main.h"

int check_palindrome(char *s, int i, int j);

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: pointer to the string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	if (!*s)
	{
		return (1);
	}

	len = _strlen_recursion(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks if a string is a palindrome
 *
 * @s: pointer to the string to be checked
 * @i: starting index
 * @j: ending index
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
