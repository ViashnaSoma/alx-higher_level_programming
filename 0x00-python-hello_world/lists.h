#ifndef LISTS
#define LISTS

#include <stdlib.h>

/**
 * struct listint_s - the singly linked list
 * @n: an integer
 * @next: pointer to following node
 *
 * Description: node structure for singly linked list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

void free_listint(listint_t *head);
int check_cycle(listint_t *list);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* LISTS */
