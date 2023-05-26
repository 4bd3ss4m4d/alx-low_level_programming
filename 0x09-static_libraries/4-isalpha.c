#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 on Success and 0 otherwise
 */
int _isalpha(int c)
{
	/* ASCII code of a through z is from 97 to 122 */
	/* ASCII code of A through Z is 65 to 90 */
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
