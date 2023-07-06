# C - Singly Linked Lists

This is a README guide for working with singly linked lists in the C programming language.

## Introduction

Singly linked lists are a fundamental data structure in computer programming. They consist of a sequence of nodes, where each node contains some data and a pointer to the next node in the sequence. The last node's pointer typically points to NULL, indicating the end of the list.

This guide aims to provide an overview of singly linked lists in C, including the basic operations of creating, inserting, deleting, and traversing the list.

## List Structure and Operations

### Node Structure

A singly linked list is made up of individual nodes. A node structure typically contains two fields: the data field to store information and the next field as a pointer to the next node.

Here's an example of a node structure in C:

```c
typedef struct Node {
    int data;
    struct Node* next;
} Node;
```

### Creating a Linked List

To create a linked list, you need to initialize the head pointer as NULL. The head pointer points to the first node in the list.

```c
Node* head = NULL;
```

### Insertion

Insertion involves adding new nodes to the linked list. There are different scenarios for insertion, such as at the beginning, at the end, or after a specific node. The basic process includes creating a new node, updating the pointers, and linking it to the appropriate position.

Here's an example of inserting a new node at the beginning of the list:

```c
void insertAtBeginning(Node** head, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}
```

### Deletion

Deleting a node involves removing a specific node from the linked list and updating the pointers of the neighboring nodes to bypass the deleted node. After deletion, memory deallocation is typically done to prevent memory leaks.

Here's an example of deleting the first occurrence of a node with a specific value:

```c
void deleteNode(Node** head, int key) {
    Node* current = *head;
    Node* prev = NULL;

    if (current != NULL && current->data == key) {
        *head = current->next;
        free(current);
        return;
    }

    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
        return;

    prev->next = current->next;
    free(current);
}
```

### Traversal

Traversal allows us to visit each node in the linked list and perform some operations. It involves using a loop to go through each node by following the next pointers until reaching the end of the list.

Here's an example of traversing a linked list and printing its elements:

```c
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
```

## Conclusion

This README provided an introduction to singly linked lists and explained the basic operations of creating, inserting, deleting, and traversing a linked list in the C programming language. Working with linked lists is fundamental in data structures and algorithms. By using this guide as a starting point, you can further explore and implement additional functionalities and optimizations to suit your specific needs in C programming projects.
