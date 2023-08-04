# README: 0x14. C - Bit Manipulation

This README provides an overview of the "0x14. C - Bit Manipulation" project, which is part of the low-level programming and algorithm track in C programming language.

## Description
In this project, we dive into the world of bit manipulation in the C programming language. The main goal is to understand how to perform various operations using bitwise operators and bitwise manipulation techniques. Bit manipulation can be highly efficient and useful for tasks such as setting, clearing, toggling, or checking specific bits within integers.

## Learning Objectives
- Understand the fundamentals of bitwise operations.
- Learn to manipulate bits using bitwise operators (&, |, ^, <<, >>).
- Explore applications of bit manipulation in C programming.
- Gain knowledge on endianness and bitfields.
- Develop problem-solving skills with bitwise operations.

## Project Contents
The "0x14. C - Bit Manipulation" project contains the following files:

- `0-binary_to_uint.c`: A C function that converts a binary number stored as a string to an `unsigned int`.
- `1-print_binary.c`: A C function that prints the binary representation of an `unsigned long int`.
- `2-get_bit.c`: A C function that returns the value of a bit at a given index.
- `3-set_bit.c`: A C function that sets the value of a bit at a given index to 1.
- `4-clear_bit.c`: A C function that sets the value of a bit at a given index to 0.
- `5-flip_bits.c`: A C function that returns the number of bits needed to flip to get from one number to another.
- `100-get_endianness.c`: A C function that checks the endianness of the system.
- `101-password`: A file containing a password for a "crackme" executable.
- `holberton.h`: The header file containing function prototypes.

## Requirements
- All files are written and compiled in C.
- The code follows the Betty style guidelines.
- The code uses the `gcc` compiler with flags `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`.

## Usage
To compile any of the C files in this project, use this command:
```
gcc -Wall -Werror -Wextra -pedantic file_name.c -o output_file
```
Then, run the resulting executable:
```
./output_file
```

## Author
This project was written by Vivian Okose
