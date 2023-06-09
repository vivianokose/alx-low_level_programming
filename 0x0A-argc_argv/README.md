# C - Command-line Arguments (argc, argv) - README

This repository contains examples of how to use command-line arguments (argc, argv) in C programming. Command-line arguments allow a user to pass arguments to a program when it is run from a terminal or command prompt. 

## Files

This repository contains the following files:

- `main.c`: This is a sample program that uses command-line arguments. It demonstrates how to use the `argc` and `argv` parameters of the main function to retrieve command-line arguments and use them in your program.

## Usage

To use command-line arguments in your C program, follow these steps:

1. Define the `argc` and `argv` parameters in your main function:

```
int main(int argc, char *argv[])
```

The `argc` parameter is an integer that represents the number of command-line arguments passed to the program. 

The `argv` parameter is an array of strings, where each element of the array is a command-line argument passed to the program.

2. Use the values of `argc` and `argv` to retrieve the command-line arguments in your program.

For example, to print the number of command-line arguments passed to the program, you can use the following code:

```
printf("Number of arguments: %d\n", argc);
```

To print each command-line argument, you can use a loop like this:

```
for (int i = 0; i < argc; i++)
{
    printf("Argument %d: %s\n", i, argv[i]);
}
```

## Conclusion

Command-line arguments allow a user to pass arguments to a program when it is run from a terminal or command prompt. By using command-line arguments in your C programs, you can make your programs more flexible and customizable, and reduce the need for hard-coding values in your program.
