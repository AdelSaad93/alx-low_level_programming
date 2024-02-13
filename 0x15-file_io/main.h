#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

int open_files(const char *file_from, const char *file_to);

void print_error(int file_des);

#endif
