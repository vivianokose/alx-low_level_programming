# 0x18. C - Dynamic Libraries

This repository contains concepts and examples related to dynamic libraries in C programming language.

## Table of Contents

- [Introduction](#introduction)
- [Static Libraries vs Dynamic Libraries](#static-libraries-vs-dynamic-libraries)
- [Creating and Using Dynamic Libraries](#creating-and-using-dynamic-libraries)
- [Advantages and Use Cases](#advantages-and-use-cases)
- [Conclusion](#conclusion)

## Introduction

Dynamic libraries are modular units of code that can be dynamically linked to an executable at runtime. They allow for the separation of code into reusable components, making the development process more efficient and manageable.

This README provides an overview of dynamic libraries, their differences from static libraries, and information on creating and using them in C programming.

## Static Libraries vs Dynamic Libraries

Static libraries and dynamic libraries serve the same purpose of code reuse but differ in how they are linked to an executable.

Static libraries:
- Are linked at compile-time.
- The compiled code from the library is directly inserted into the resulting executable.
- Can result in larger executables as the library code is duplicated for each executable.
- Require recompilation of all executables using the library if changes are made.

Dynamic libraries:
- Are linked at runtime.
- The compiled code from the library is loaded into memory when the executable is run.
- Can be shared among multiple executables, reducing duplication and executable size.
- Allow for easier updates of the library without recompiling the executables.

## Creating and Using Dynamic Libraries

To create a dynamic library in C, the following steps are typically followed:

1. Write the library code: Create the necessary functions and related code that will be included in the library.
2. Compile the library code: Use the appropriate compiler flags (`-shared -fPIC` in most cases) to compile the code into a dynamic library file (e.g., `.so` file on Linux, `.dylib` file on macOS).
3. Link the library: When compiling an executable that uses the dynamic library, specify the library file and any necessary include paths (`-L` flag).
4. Run the executable: The dynamic library is loaded at runtime and used by the executable.

It's important to ensure that the library file is accessible to the runtime environment. This can involve setting appropriate library search paths using environment variables like `LD_LIBRARY_PATH` on Linux.

Detailed instructions and platform-specific considerations may vary, so it's recommended to refer to the documentation or resources specific to your development environment and operating system.

## Advantages and Use Cases

Dynamic libraries offer several advantages and are commonly used in various scenarios:

- Code reusability: Dynamic libraries allow code to be shared among multiple executables, promoting modular design and reducing code duplication.
- Flexibility and extendibility: Dynamic libraries can be easily updated without recompiling all the executables that use them, making updates and bug fixes more manageable.
- Runtime loading and unloading: Dynamic libraries can be loaded and unloaded as needed by an executable, providing flexibility to handle plugins or dynamically changing requirements.
- Memory efficiency: Since dynamic libraries are loaded into memory at runtime, they can be shared among multiple executables, reducing overall memory usage.

Dynamic libraries are commonly utilized in areas such as application development, plugin systems, shared utility code, and operating system functions.

## Conclusion

Understanding dynamic libraries and how to create and use them is crucial for efficient and modular code development in C programming. This README provided an introduction to dynamic libraries, the differences from static libraries, and basic information on their creation and usage. For more detailed information and examples, please refer to the C programming language documentation and platform-specific resources.
