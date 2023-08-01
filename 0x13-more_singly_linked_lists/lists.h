#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @x: integer value stored in the node
 * @next_node: points to the next node in the linked list
 *
 * Description: this is a structure to define a singly linked list node
 *              used for integers in a linked list it containing the
 *              value of x and a pointer to the next node *next_node.
 */
typedef struct listint_s
{
    int x;
    struct listint_s *next_node;
} listint_t;

/* Function prototypes*/

int _putchar(char c);
size_t print_listint(const listint_t *first_node);
listint_t *reverse_listint(listint_t **first_node);
size_t print_listint_safe(const listint_t *first_node);
size_t free_listint_safe(listint_t **first_node);
listint_t *find_listint_loop(listint_t *first_node);
listint_t *add_nodeint_end(listint_t **first_node, const int x);
void free_listint(listint_t *first_node);
void free_listint2(listint_t **first_node);
int pop_listint(listint_t **first_node);
size_t listint_len(const listint_t *first_node);
listint_t *add_nodeint(listint_t **first_node, const int x);
listint_t *get_nodeint_at_index(listint_t *first_node, unsigned int index);
int sum_listint(listint_t *first_node);
listint_t *insert_nodeint_at_index(listint_t **first_node, unsigned int idx, int x);
int delete_nodeint_at_index(listint_t **first_node, unsigned int index);


#endif


