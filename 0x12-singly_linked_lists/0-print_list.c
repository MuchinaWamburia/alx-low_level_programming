#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all elements of a list.
 * @h: The head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL) {
if (h->str == NULL) {
printf("[0] (nil)\n");

} else {
print("[%u] %s\n", h->len, h->str);
}
count++;
h = h->next;
}

return count;
}
