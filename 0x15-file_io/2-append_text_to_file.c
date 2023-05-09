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
	int fd, bytes_w, str_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len]; str_len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	bytes_w = write(fd, text_content, str_len);

	if (fd == -1 || bytes_w == -1)
		return (-1);

	close(fd);

	return (1);
}
