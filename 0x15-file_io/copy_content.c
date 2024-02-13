#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * copy_content - Copies content from source file to destination file.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 *
 * Return: 0 on success, -1 on failure.
 */
int copy_content(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t read_count, write_count;

	while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1 || write_count != read_count)
		{
			dprintf(2, "Error: Can't write to file\n");
			return (-1);
		}
	}

	if (read_count == -1)
	{
		dprintf(2, "Error: Can't read from file\n");
		return (-1);
	}

	return (0);
}
