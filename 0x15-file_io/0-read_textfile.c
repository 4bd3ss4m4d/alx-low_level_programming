#include <fcntl.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to
 *		   the POSIX standard output.
 * @filename: name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(sizeof(char) * (letters));
	ssize_t bytes_r, bytes_w;

	if (filename == NULL || buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	bytes_r = read(fd, buffer, letters);
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	if (fd == -1 || bytes_r == -1 || bytes_w == -1 || bytes_w != bytes_r)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_w);
}
