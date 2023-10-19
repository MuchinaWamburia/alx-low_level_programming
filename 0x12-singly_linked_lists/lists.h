#ifndef LISTS_H
#define LISTS_H

/* Structure for a singly linked list node */
typedef struct list_s {
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototype to print all elements of a list */
size_t print_list(const list_t *h);

/* Function prototype to return the number of elements in a list */
size_t list_len(const list_t *h);

/*function that adds a new node at the beginning of a list_t list.*/
list_t *add_node(list_t **head, const char *str);

/*function that adds a new node at the end of a list_t list*/
list_t *add_node_end(list_t **head, const char *str);

/*function that frees a list_t list.*/
void free_list(list_t *head);

#endif /* LISTS_H */

