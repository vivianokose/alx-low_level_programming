# Function Pointers

A Function Pointer is a variable that stores the address of a function that can be called later in the program. It allows passing functions as arguments to other functions, returning them as values, or storing them in data structures.

In this README document, we will explore the use and implementation of Function Pointers in C programming.

## Declaration & Syntax

A Function Pointer is declared by specifying the function's return type, the name of the pointer, and the parameters the function takes.

For example, to declare a pointer to a function that takes two integer parameters and returns an integer, the syntax is:

```c
int (*function_ptr) (int, int);
```

The * indicates that it is a pointer variable, and the parentheses enclose the parameter list. The return type is specified before the name of the pointer.

## Assigning function pointers

Before using a function pointer, it must be assigned the address of a function. 

For example, given the following function definition:

```c
int multiply(int a, int b) {
    return a * b;
}
```

We can assign the address of the function `multiply` to a function pointer as follows:

```c
int (*function_ptr) (int, int) = &multiply;
```

Or alternatively, we can use the shorthand notation:

```c
int (*function_ptr) (int, int) = multiply;
```

## Using function pointers

Once assigned the target function's address, we can use the pointer to call the function as follows:

```c
int result = (*function_ptr)(2, 3);
```

In the above example, the function pointer `function_ptr` is dereferenced and used to call the `multiply` function with parameters 2 and 3. The result of the function call is then assigned to the integer variable `result`.

Function pointers are commonly used in libraries that contain many functions with different functionalities but related purposes.

## Example

Here's an example that demonstrates how function pointers can be used to select and re-use sorting algorithms:

```c
#include <stdio.h>

int cmp_asc(int a, int b) {
    return a - b;
}

int cmp_desc(int a, int b) {
    return b - a;
}

void bubble_sort(int *arr, size_t n, int (*cmp)(int, int)) {
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = 0; j < n - i - 1; j++) {
            if (cmp(arr[j], arr[j + 1]) > 0) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int arr[] = {3, 7, 1, 6, 8, 5, 4};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, n, cmp_asc);

    printf("Ascending order: ");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr, n, cmp_desc);

    printf("Descending order: ");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

In this example, the `bubble_sort` function takes an array of integers, its size, and a function pointer that is responsible for comparing two elements of the array. Based on the value of the comparison function, the sorting algorithm sorts the integers in ascending or descending order.

The `cmp_asc` and `cmp_desc` functions passed as arguments are examples of comparison functions, intended to be passed to the `bubble_sort` function. 

In this way, the `bubble_sort` function can be used with different comparison functions, acting as a sorting algorithm modifier.

## Conclusion

Function pointers are a powerful and flexible feature in C programming. It allows for more efficient use and reusability of functions by passing function pointers to other functions or storing them in data structures. Its applications are extensive - from sorting algorithms to event-driven programming.
