#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - entry point function
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 on success, or exit with error code
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, n_read, n_write, close_from, close_to, fd_failed;
	char buf[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		n_write = write(fd_to, buf, n_read);
		if (n_write == -1 || n_write != n_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_from = close(fd_from);
	close_to = close(fd_to);
	if (close_from == -1 || close_to == -1)
	{
		fd_failed = close_from == -1 ? fd_from : fd_to;
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_failed);
		exit(100);
	}

	return (0);
}
