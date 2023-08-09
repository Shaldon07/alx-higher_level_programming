#include "lists.h"

/**
 * check_cycle - checks when the linked list contains a cycle
 * @list: linked list that must be checked
 * Return: 1 when list has a cycle, 0 when it doesn't
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
