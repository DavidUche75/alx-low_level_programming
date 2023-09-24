#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int cntr = 0;

	tmp = h;
	while (tmp)
	{
		cntr++;
		tmp = tmp->next;
	}
	return (cntr);
}
