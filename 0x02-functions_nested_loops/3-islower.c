#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 on Success and 0 otherwise
 */
int _islower(int c)
{
	/* ASCII code of a through z is from 97 to 122 */
	return (c >= 97 && c <= 122);
}
