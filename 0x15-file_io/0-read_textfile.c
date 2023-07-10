#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed; 0 if any error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, fp);
	if (bytes_read < 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	fclose(fp);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
