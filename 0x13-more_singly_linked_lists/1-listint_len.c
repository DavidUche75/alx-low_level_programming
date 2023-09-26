#include "lists.h"

/**
 * listint_len - Calculate the number of elements in a linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	unsigned int corner = 0;

	tmp = h;
	while (tmp)
	{
		corner++;
		tmp = tmp->next;
	}
	return (corner);
}
