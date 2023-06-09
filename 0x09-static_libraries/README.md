# C - Static Libraries

This is a guide on how to use and create static libraries in the C programming language. Static libraries are collections of pre-compiled object code that can be linked with a program at compile time to provide reusable functions and modules.

## What is a Static Library?

A static library, also known as an archive, is a file containing object code compiled from multiple source files. It is called "static" because the code is linked directly into the program during the compilation process. The resulting executable contains all the necessary code, making it independent of external dependencies.

Static libraries offer several advantages:
- **Code Reusability:** Static libraries allow you to encapsulate reusable functions and modules, promoting code modularity and reducing redundancy.
- **Performance:** By linking the code directly, static libraries can provide faster execution times compared to dynamic libraries.
- **Portability:** Since the library code is included in the final executable, there is no need to distribute additional library files.

## Creating a Static Library

To create a static library, you need to follow these steps:

1. **Write your code:** Implement the desired functionality in separate C source files.
2. **Compile the source files:** Use a C compiler to compile the source files into object files (.o files). For example:
   ```
   gcc -c file1.c -o file1.o
   gcc -c file2.c -o file2.o
   ```
3. **Create the library:** Use the `ar` command (archiver) to create the static library file (.a file). The syntax is:
   ```
   ar rcs libname.a file1.o file2.o
   ```
   Replace `libname` with the desired name of your library.
4. **Verify the library:** You can list the contents of the library using the `ar` command:
   ```
   ar t libname.a
   ```
   This will display a list of object files contained in the library.

## Using a Static Library

To use a static library in your program, follow these steps:

1. **Include the library header file:** Include the library's header file in your source code using the `#include` preprocessor directive. For example:
   ```c
   #include "library.h"
   ```
2. **Compile your program:** Compile your program's source file(s) along with the static library. For example:
   ```
   gcc main.c -o program -L/path/to/library -lname
   ```
   Replace `/path/to/library` with the actual path where the library file is located, and `libname` with the name of your library (without the "lib" prefix and the ".a" extension).
3. **Link with the library:** The linker will link your program with the static library during the compilation process. The resulting executable will contain the library's code.

## Linking with a Static Library

When linking with a static library, there are a few additional considerations:

- **Library Order:** If your program depends on multiple static libraries, it's important to specify the libraries in the correct order. Libraries should be listed after the source files that depend on them. For example:
  ```
  gcc main.c -o program -L/path/to/libraries -lfoo -lbar
  ```
- **Library Search Path:** If the library is not in the standard system library path, you
