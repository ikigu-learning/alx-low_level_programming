# Linked Lists

In this project, I tackle the ALX singly-linked lists problems. This is in my efforts to learn low-level-programming in C.

## The structure of my linked lists

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## These are what the functions in the project's files do:

1. **0-print_listint.c**: prints all elements of a `listint_t` list.
2. **1-listint_len.c**: returns the number of elements in a linked `listint_t` list.
3. **2-add_nodeint.c**: adds a new node at the beginning of a `listint_t` list.
4. **3-add_nodeint_end.c**:adds a new node at the end of a `listint_t` list.
5. **4-free_listint.c**: frees a `listint_t` list.
6. **5-free_listint2.c**: frees a `listint_t` list and sets its _head_ to null.
7. **6-pop_listint.c**: deletes the head node of a `listint_t` list and returns the head node's data(n).
8. **7-get_nodeint.c**: returns the nth node of a `listint_t` list.
9. **8-sum_listint.c**: returns the sum of all the data (n) of a `listint_t` list.
10. **9-insert_nodeint.c**: inserts a new node at a given position.
11. **100-reverse_listint.c**: reverses a list with a single loop.
