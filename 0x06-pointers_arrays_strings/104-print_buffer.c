#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the content of size bytes of the buffer
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);

		k = (size - i < 10) ? (size - i) : 10;

		for (j = 0; j < 10; j++)
		{
			if (j % 2 == 0)
				printf(" ");

			if (j < k)
				printf("%02x", b[j + i]);
			else
				printf("  ");
		}

		printf(" ");

		for (j = 0; j < k; j++)
		{

			if (b[j + i] < 32 || b[j + i] > 126)
				printf(".");
			else
				printf("%c", b[j + i]);
		}
		printf("\n");
	}
}
