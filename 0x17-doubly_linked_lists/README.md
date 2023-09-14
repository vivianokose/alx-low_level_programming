# 0x17. C - Doubly Linked Lists

This repository contains concepts and examples related to doubly linked lists in C programming language.

## Introduction

A doubly linked list is a linear data structure that consists of nodes where each node contains a reference to the next node and the previous node. It provides a way to traverse the list in both directions: forward and backward. 

This README provides an overview of doubly linked lists and the common operations performed on them.

## Doubly Linked List

- Each node in a doubly linked list contains three fields: data, a pointer to the next node (next pointer), and a pointer to the previous node (prev pointer).
- The first node of the list is called the head, and the last node is called the tail.
- Unlike singly linked lists, doubly linked lists allow traversal in both directions, making it more flexible for operations like insertion, deletion, and searching.

## Operations on Doubly Linked Lists

Common operations on doubly linked lists include:

- Insertion: Adding a node at the beginning, end, or at a specific position within the list.
- Deletion: Removing a node from the list, whether it is at the beginning, end, or a specific position.
- Traversal: Iterating through the list to access and process each element of the list in a forward or backward direction.
- Searching: Finding a specific node within the list based on its data value.
- Updating: Modifying the data value of a node in the list.
- Reversal: Changing the order of the nodes in the list, reversing the linked list.

## Advantages of Doubly Linked Lists

Doubly linked lists have some advantages over singly linked lists:

- Bi-directional traversal: Doubly linked lists allow traversing the list in both forward and backward directions, which can be useful in certain scenarios.
- Easy deletion of previous node: In a singly linked list, deleting a node requires traversing from the head to find the node's previous node. In a doubly linked list, the previous node is readily available, making deletion more efficient.
- Doubly linked lists can be used to implement other data structures like stacks, queues, and hash tables.

## Conclusion

Understanding doubly linked lists and their operations is crucial for implementing and manipulating linked structures in C. This README provided an introduction to doubly linked lists and the common operations performed on them. For more detailed information and examples, refer to the C programming language documentation and explore the code examples provided in this repository.
