#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define BUFFER_SIZE 1024

int open_files(const char *file_from, const char *file_to)
int copy_content(int fd_from, int fd_to)
void close_files(int fd_from, int fd_to)

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	if (open_files(file_from, file_to) == -1)
		exit(98);

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_from == -1 || fd_to == -1)
	{
		dprintf(2, "Error: Can't open file\n");
		close_files(fd_from, fd_to);
		exit(99);
	}

	if (copy_content(fd_from, fd_to) == -1)
		exit(99);

	close_files(fd_from, fd_to);

	return (0);
}

