#ifndef LISTS
#define LISTS

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: an integer
 * @next: pointer to the following node
 *
 * Description: node structure for singly linked lists
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

void free_listint(listint_t *head);
listint_t *insert_node(listint_t **head, int number);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif /* LISTS */
