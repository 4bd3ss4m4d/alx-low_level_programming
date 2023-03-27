#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	j = strlen(s) - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
