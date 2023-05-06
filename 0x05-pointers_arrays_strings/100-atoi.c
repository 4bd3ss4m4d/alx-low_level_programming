#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int sign = 1, i;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
			/* Multiply by 10 to shift the digit to the left */
			result = result * 10 + (s[i] - '0');

		else if (result != 0 && !(s[i] >= '0' && s[i] <= '9'))
			break;
	}

	return (result * sign);
}
