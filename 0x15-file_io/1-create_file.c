#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file - creates a file with the given content
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	mode_t mode;
	int fd;
	ssize_t len, bytes_written;

	if (filename == NULL)
		return (-1);

	mode = S_IRUSR | S_IWUSR;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
