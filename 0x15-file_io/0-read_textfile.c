#include "main.h"

/* By Abdelghni Hamanar */
/**
 * read_textfile - Entry point
 * @filename: pointer to the file name
 * @letters: size
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_r, bytes_w, fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	bytes_r = read(fd, buffer, letters);
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	if (fd == -1 || bytes_r == -1 || bytes_w == -1 || bytes_w != bytes_r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_w);
}
