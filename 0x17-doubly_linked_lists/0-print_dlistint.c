#include "lists.h"

/**
 * print_distinct - prints all the eklements of a distint_t list.
 * @h: the head of the distinct_t list.
 *
 * Return: the number of nodes is the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
