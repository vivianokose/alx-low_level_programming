# C - malloc, free

This repository contains a simple example of using the `malloc` and `free` functions in the C programming language. These functions are used for dynamic memory allocation and deallocation.

## Usage

The `malloc` function is used to allocate a block of memory dynamically. Its prototype is as follows:

```c
void* malloc(size_t size);
```

The `size` parameter specifies the number of bytes to be allocated. The function returns a pointer to the allocated memory block, or `NULL` if the allocation fails.

Here is an example of using `malloc` to allocate an array of integers:

```c
int* numbers = (int*)malloc(5 * sizeof(int));
if (numbers == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
}
```

In this example, we allocate space for 5 integers using the `sizeof` operator to ensure the correct amount of memory is allocated. It is important to check if the allocation was successful by comparing the returned pointer to `NULL`.

The `free` function is used to deallocate a previously allocated block of memory. Its prototype is as follows:

```c
void free(void* ptr);
```

The `ptr` parameter is the pointer to the memory block that needs to be deallocated. It is important to note that the `ptr` argument must be a pointer previously returned by `malloc`, `calloc`, or `realloc`. Passing any other pointer to `free` results in undefined behavior.

Here is an example of using `free` to deallocate the previously allocated array of integers:

```c
free(numbers);
```

After calling `free`, the memory is returned to the system and can be reused for other purposes.
