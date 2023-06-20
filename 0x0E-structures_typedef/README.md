Introduction 
---
Project done during Full Stack Software Engineering studies at ALX. It aims to learn about structures and typedef in C language.

Structures and typedef are important concepts in the C programming language. Structures provide a way to group several variables of different data types, while typedef enables the programmer to create new data types.

In this README document, we will explore the use of structures and typedef in C programming.

Structures
---
A structure is a C programming language data type that groups multiple data types into a single user-defined data type. Structures are often referred to as "structs" in C programming. Structures are user-defined and are typically used to simplify code by grouping related variables. 

Structures can be defined using the following syntax:
```c
struct structure_name {
  data_type1 variable_name1;
  data_type2 variable_name2;
  data_type3 variable_name3;
  ...
};
```

For example, we can define a structure called "student" to hold information on a student, such as their name, age, and grade:

```c
struct student {
  char name[50];
  int age;
  float grade;
};
```

We can then declare instances of the student structure in our code and assign values to them.

```c
struct student john;

strcpy(john.name, "John Doe");
john.age = 18;
john.grade = 3.5;
```

Typedef
---
The C typedef keyword is used to define a new data type based on an existing data type. It allows programmers to create aliases for data types to make them easier to use and understand.

Typedef can be used to create a new name for an existing data type:

```c
typedef existing_data_type new_name;
```

For example:

```c
typedef int integer;
```

Now, integer is a new name for the int data type.

Typedef can also be used to define structures.

```c
typedef struct structure_name {
  data_type1 variable_name1;
  data_type2 variable_name2;
  data_type3 variable_name3;
  ...
} new_structure_name;
```

For example, we can create a typedef for the student structure we defined earlier:

```c
typedef struct student {
  char name[50];
  int age;
  float grade;
} student_t;
```

Now we can declare instances of the student structure using the new name "student_t":

```c
student_t john;

strcpy(john.name, "John Doe");
john.age = 18;
john.grade = 3.5;
```
## Technologies
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 20.04 LTS

## Files
All of the following files are programs written in C:

| Filename | Description |
| -------- | ----------- |
| `dog.h` | Header file that contains a `struct dog` |
| `1-init_dog.c` | Initialize a variable of type `struct dog` |
| `2-print_dog.c` | Prints a `struct dog` |
| `4-new_dog.c` | Creates a new dog |
| `5-free_dog.c` | Frees a dog |

Conclusion
---
Structures and typedef play an important role in C programming. Structures provide a method for grouping related variables into a single data type, improving code organization and readability. Typedef enables the creation of user-defined data types, which can greatly simplify complicated code by making them more understandable and easier to use.
