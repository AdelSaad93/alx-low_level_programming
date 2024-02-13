#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * close_files - Closes file descriptors.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
}
