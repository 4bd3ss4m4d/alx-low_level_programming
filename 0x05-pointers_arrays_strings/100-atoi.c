
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 * Return: an integer
 */

int _atoi(char *s)
{
	int sign;
	unsigned int result;
	int i;

	sign = 1;
	result = 0;
	i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Multiply by 10 to shift the digit to the left */
			result = result * 10 + (s[i] - '0');
		}

		if (result != 0 && !(s[i] >= '0' && s[i] <= '9'))
		{
			break;
		}

		i++;
	}

	return (result * sign);
}
