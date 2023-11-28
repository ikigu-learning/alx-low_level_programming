# Linked Lists

In this project, we learn how to create singly-linked lists, how to add nodes, and delete nodes.

## The structure of my linked lists

```C
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Problem set

1. **0-print_list.c**: Create a function that prints all the elements of a `list_t` list.
2. **1-list_len.c**: Create a function that returns the number of elements in a linked `list_t` list.
3. **2-add_node.c**: Create a function that adds a new node at the beginning of a `list_t` list.
4. **3-add_node_end.c**: Write a function that adds a new node at the end of a `list_t` list.
5. **4-free_list.c**: Write a function that frees a `list_t` list
