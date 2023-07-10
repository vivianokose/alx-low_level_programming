# 0x14. C - Bit Manipulation

This repository contains the solutions to the tasks assigned in the **0x14. C - Bit Manipulation** project, which is part of the curriculum at Holberton School. The project focuses on the concepts and implementation of Bit Manipulation operations in the C programming language.

## Learning Objectives

- Understand the basic concepts of binary representation and bitwise operations.
- Know how to use bitwise operators such as `&`, `|`, `^`, `<<`, and `>>`.
- Learn how to manipulate bits and bitwise operations on numbers.
- Understand signed and unsigned integers and their representation.
- Learn how to implement bit manipulation for practical problem-solving.

## Files

The project consists of the following files:

- **0-binary_to_uint.c:** A function that converts a binary number to an unsigned integer.
- **1-print_binary.c:** A function that prints the binary representation of a number.
- **2-get_bit.c:** A function that returns the value of a bit at a given index.
- **3-set_bit.c:** A function that sets the value of a bit at a given index to 1.
- **4-clear_bit.c:** A function that sets the value of a bit at a given index to 0.
- **5-flip_bits.c:** A function that returns the number of bits needed to flip to get from one number to another.
- **_putchar.c, holberton.h:** Helper files containing necessary function prototypes.

## Requirements

- The code was written and compiled on an Ubuntu 20.04 LTS machine using `gcc`.
- The code files require the standard C library.

## Compilation and Usage

To compile the provided code files, use the following format:

```
gcc -Wall -Werror -Wextra -pedantic <source-file.c> -o <output-file>
```

To run the compiled program, use the following command:

```
./<output-file>
```

Make sure to replace `<source-file.c>` with the appropriate source code file and `<output-file>` with the desired name for the compiled executable.

## Examples

- To convert a binary number to an unsigned integer:

```c
unsigned int num = binary_to_uint("101011");
printf("%u\n", num);  // Output: 43
```

- To print the binary representation of a number:

```c
print_binary(98);  // Output: 1100010
```

- To get the value of a bit at a given index:

```c
int bit = get_bit(75, 2);
printf("%d\n", bit);  // Output: 0
```

- To set the value of a bit at a given index to 1:

```c
unsigned long int num = 1024;
unsigned long int result = set_bit(&num, 5);
printf("%lu\n", result);  // Output: 1056
```

- To clear the value of a bit at a given index to 0:

```c
unsigned long int num = 856;
unsigned long int result = clear_bit(&num, 3);
printf("%lu\n", result);  // Output: 848
```

- To find the number of bits needed to flip to get from one number to another:

```c
unsigned int num1 = 14, num2 = 31;
unsigned int flips = flip_bits(num1, num2);
printf("%u\n", flips);  // Output: 5
```

## Authors

This project was completed by Okose, Vivian Chiamaka at Holberton School.

## Acknowledgments

The projects and assignments are part of the curriculum at [Holberton School](https://www.holbertonschool.com/).
