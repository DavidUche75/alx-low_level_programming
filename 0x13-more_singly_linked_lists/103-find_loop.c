#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *decr = head;
	listint_t *incr = head;

	if (!head)
		return (NULL);

	while (decr && incr && incr->next)
	{
		incr = incr->next->next;
		decr = decr->next;
		if (incr == decr)
		{
			decr = head;
			while (decr != incr)
			{
				decr = decr->next;
				incr = incr->next;
			}
			return (incr);
		}
	}

	return (NULL);
}
