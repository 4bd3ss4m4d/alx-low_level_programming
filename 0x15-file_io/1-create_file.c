#include "main.h"

/**
 * create_file - creates a file with the given name and writes the
 *	       given text content to it.
 * @filename: name of the file to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len]; text_len++)
			;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(fd, text_content, text_len);

	if (fd == -1 || bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
