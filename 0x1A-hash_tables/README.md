# 0x1A. C - Hash Tables

This repository contains solutions for the project "0x1A. C - Hash Tables" of the Holberton School curriculum. The purpose of this project is to understand and implement hash tables in the C programming language.

## What is a hash table?

A hash table is a data structure that allows efficient data retrieval and storage. It consists of an array of buckets or slots, where data elements are stored based on their hash values. Hash functions are used to map the data elements to specific positions in the array. This enables quick access to stored values by their keys.

## Project Files

The project files are organized as follows:

- `hash_tables.h`: Header file containing function prototypes and structure definitions.
- `0-hash_table_create.c`: Implementation of a function that creates a new hash table.
- `1-djb2.c`: Implementation of the djb2 hash function.
- `2-key_index.c`: Implementation of a function that gives the index of a key.
- `3-hash_table_set.c`: Implementation of a function that adds an element to a hash table.
- `4-hash_table_get.c`: Implementation of a function that retrieves a value associated with a given key.
- `5-hash_table_print.c`: Implementation of a function that prints the contents of a hash table.
- `6-hash_table_delete.c`: Implementation of a function that deletes a hash table and frees allocated memory.

## Usage

To compile these files, use the following command:

```
gcc -Wall -Wextra -Werror -pedantic <filename.c> <main.c> -o <outputfile>
```

Replace `<filename.c>` with the desired file name (e.g., `0-hash_table_create.c`) and `<outputfile>` with the desired output file name.

Each file can be tested with the provided `main.c` file or by creating a custom test program.

## About

This project is part of the Holberton School curriculum and was completed as a learning opportunity for hash tables in the C programming language.
