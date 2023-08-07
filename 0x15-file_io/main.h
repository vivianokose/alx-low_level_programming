#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth: Vivian Okose
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x15-file_io directory.
 */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
