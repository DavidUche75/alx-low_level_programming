#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	unsigned int count = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->node);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
