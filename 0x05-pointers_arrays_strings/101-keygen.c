#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0 on Success
 */
int main(void)
{
	int sum = 0, i = 0;
	char password[100];
	time_t t;

	srand((int)time(&t));

	for (i = 0; sum < 2772; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	if (sum > 2772)
		password[i - 1] -= sum - 2772;

	password[i] = '\0';

	printf("%s", password);

	return (0);
}
