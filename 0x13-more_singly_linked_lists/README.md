# Linked Lists

In this project, I tackle the ALX linked lists tasks. This is in my efforts to learn low-level-programming in C.

## The structure of my linked lists

````c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
}

list_t;
```

## These are the functions contained in the project's files:

1. **0-print_list.c**: a function that prints all the elements of a `list_t` list.
2. **1-list_len.c**: a function that returns the number of elements in a linked `list_t` list.
3. **2-add_node.c**: a function that adds a new node at the beginning of a `list_t` list.
4. **3-add_node_end.c**: a function that adds a new node at the end of a `list_t` list.
5. **4-free_list.c**: a function that frees a `list_t` list
````
