Introduction 
---
The C Preprocessor is an integral component of the C programming language designed to process source code before compilation. The preprocessor functionality interprets and modifies the code, which is executed before the compiler's compilation stage. 

In this README document, we will explore the basics of the C preprocessor.

What is the C Preprocessor?
---
Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn about how to include guard in the header files and macros in **C language**.

The C Preprocessor is a program component that processes source code files before the compilation phase. It identifies specific preprocessor directives starting with a "#" symbol in the code, analyze and modifies the program's text, based on these directives.

Uses of C Preprocessor
---

The C Preprocessor performs several functions including:

1. Macro Expansion: The C preprocessor expands macros defined using the #define directive to a defined code sequence to provide code modularity, reusability, and readability.

2. Conditional Compilation: Using preprocessor directives like the #if, #endif, #else and #elif to check a specific condition at compile-time, the preprocessor selectively compiles source code.

3. File Inclusion: The preprocessor includes definitions of another file in the source code using directives such as the #include standard.

4. Compiler Configuration: Preprocessor directives allow the configuration of the compiler behavior at compile-time.

How to use the C Preprocessor
---
Using the C preprocessor is relatively simple and requires the following steps:

1. Use a #define directive to create a macro to be expanded. 
```c
#define PI 3.14159
```
This macro defines the value of PI to be 3.14159.

2. Use a #include directive to include the contents of another file into your code.
```c
#include <stdio.h>
```
This directive includes the contents of stdio.h in the source code.

3. Use the #ifdef and #ifndef directives to conditionally compile code based on specific conditions.

4. You can use the #undef directive to remove/redefine a previously defined macro.

## Technologies
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 20.04 LTS

## Files
All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| `0-object_like_macro.h` | Header file that defines a macro named `SIZE` |
| `1-pi.h` | Header file that defines a macro named `PI` |
| `2-main.c` | Prints the name of the file it was compiled from |
| `3-function_like_macro.h` | Function-like macro `ABS(x)` that computes the absolute value of a number `x` |
| `4-sum.h` | Function-like macro `SUM(x,y)` that computes the sum of the numbers `x` and `y` |
