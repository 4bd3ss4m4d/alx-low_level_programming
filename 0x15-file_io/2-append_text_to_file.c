#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append to
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_wtirren, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len]; text_len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	bytes_wtirren = write(fd, text_content, text_len);

	if (fd == -1 || bytes_wtirren == -1)
		return (-1);

	close(fd);

	return (1);
}
