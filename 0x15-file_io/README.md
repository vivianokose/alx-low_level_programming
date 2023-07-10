# 0x15. C - File I/O

This repository contains the solutions to the tasks assigned in the **0x15. C - File I/O** project, which is part of the curriculum at Holberton School. The project focuses on the concepts and implementation of file I/O operations in the C programming language.

## Learning Objectives

- Understand and use file descriptors.
- Learn how to open, read, write, and close files in C.
- Understand important system calls like `open`, `read`, `write`, and `close`.
- Use file permissions and flags to control file access.
- Handling file errors and edge cases.
- Manipulating file pointers and seeking in files.
- Applying file I/O techniques to practical problem-solving.

## Files

The project consists of the following files and directories:

- **0-read_textfile.c:** A C program that reads a text file and prints its content to the standard output.
- **1-create_file.c:** A C program that creates a file with a given name and writes a specific text content into it.
- **2-append_text_to_file.c:** A C program that appends text at the end of a file.
- **3-cp.c:** A C program that copies the content of one file to another file.
- **100-elf_header.c (Advanced Task):** A C program that displays the information contained in the ELF header at the start of an ELF file.
- **holberton.h:** A header file containing the function prototypes used in the project.
- **tests:** A directory containing test files for the programs.

## Requirements

- The programs were written and compiled on an Ubuntu 20.04 LTS machine using `gcc` in accordance with the C90 standard.
- The code files require the standard C library and the standard input/output library.

## Compilation and Usage

To compile the programs, use the following format:

```
gcc -Wall -Werror -Wextra -pedantic <source-file.c> -o <output-file>
```

To run the compiled program, use the following command:

```
./<output-file> <arguments>
```

Make sure to replace `<source-file.c>` with the appropriate source code file and `<output-file>` with the desired name for the compiled executable. Adjust the command line arguments according to the program's usage.

## Usage Examples

- To read and print the content of a text file:

```
$ ./0-read_textfile file.txt
This is the content of file.txt
```

- To create a new text file and write content into it:

```
$ ./1-create_file file.txt "Hello, world!"
$ cat file.txt
Hello, world!
```

- To append text at the end of an existing file:

```
$ ./2-append_text_to_file file.txt "Appending some text"
$ cat file.txt
Hello, world!
Appending some text
```

- To copy the content of one file to another:

```
$ ./3-cp file1.txt file2.txt
$ cat file2.txt
This is the content of file1.txt
```

## Authors

This project was completed by Okose, Vivian at Holberton School.

## Acknowledgments

The projects and assignments are part of the curriculum at [Holberton School](https://www.holbertonschool.com/).
