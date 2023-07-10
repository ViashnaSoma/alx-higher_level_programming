#include "lists.h"

/**
 * check_cycle - detects loops
 * @list: linked list head
 *
 * Description - detects loops
 * Return: 1 for cycled, 0 for nothing found
 */

int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
		return (0);
	}
	slow = list;
	fast = list->next;
	while (fast && slow && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
