#0x12. C - Singly linked lists
##When and why using linked lists vs arrays
Linked Lists and Arrays are both data structures, and each has its own advantages and use cases.

###Linked Lists:

When to Use: Linked lists are often preferred when you need to frequently insert or remove elements in the middle of a list. They are dynamic data structures and can grow or shrink as needed. Linked lists are particularly useful for implementing data structures like stacks, queues, and symbol tables. In cases where the size of the data is unknown or may change, linked lists are a good choice.
####Advantages:
Efficient insertions and deletions in the middle of the list.
Dynamic size, which means they can grow or shrink as needed.
####Disadvantages:
Slower access times compared to arrays when directly accessing elements.
Higher memory overhead due to the need to store the next (and optionally previous) pointers.
###Arrays:

When to Use: Arrays are suitable when you need fast and direct access to elements and the size of the data structure is known and won't change frequently. They are often used for data that needs to be retrieved by index, such as arrays in programming languages.
####Advantages:
Constant-time access to elements by index.
Lower memory overhead compared to linked lists.
####Disadvantages:
Inefficient for frequent insertions and deletions, especially in the middle of the array.
##How to Build and Use Linked Lists:
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the list.
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the list.
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Function to print the linked list.
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printf("Linked List: ");
    printList(head);

    return 0;
}
