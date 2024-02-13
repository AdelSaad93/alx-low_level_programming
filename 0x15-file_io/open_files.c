#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * open_files - Opens the source and destination files.
 * @file_from: The source file.
 * @file_to: The destination file.
 *
 * Return: 0 on success, -1 on failure.
 */
int open_files(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_from == -1 || fd_to == -1)
	{
		dprintf(2, "Error: Can't open file\n");
		close_files(fd_from, fd_to);
		return (-1);
	}

	return (0);
}

