# 0x12. C - Singly Linked Lists

A singly linked list is a data structure used in computer science to organize and store a collection of elements called nodes. Each node contains two main components:
1.	Data or Value: This is the information stored in the node, which can be of any data type depending on the application's needs.
2.	Next Pointer: This is a reference or pointer to the next node in the sequence. It points to the memory location of the next node in the linked list.
Key characteristics of a singly linked list include:
•	Head: The first node in the linked list. It serves as the starting point for traversing the list.
•	Tail: The last node in the linked list. Its next pointer is usually set to NULL, indicating the end of the list.
•	Traversal: You can traverse a singly linked list only in the forward direction, starting from the head and following the next pointers until reaching the tail.
•	Dynamic Size: Linked lists can easily grow or shrink in size as nodes are added or removed, without the need for resizing or reallocation like arrays.
•	Insertion and Deletion: Inserting or deleting a node in a singly linked list can be efficient, especially when the position of insertion or deletion is known.
Here's a simple representation of a singly linked list with three nodes:

	+---+ +---+ +---+ | 1 | -> | 2 | -> | 3 | +---+ +---+ +---+
In this example, each node contains a value and a reference to the next node. The last node's next pointer points to NULL, indicating the end of the list.
Singly linked lists are used to implement various data structures and algorithms, including stacks, queues, symbol tables, and more. They offer flexibility in managing data dynamically, but they require additional memory for storing the next pointers.

