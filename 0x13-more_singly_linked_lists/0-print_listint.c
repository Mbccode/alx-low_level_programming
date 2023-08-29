#include "lists.h"

/**
 * print_listint - Entry point for printing nodes
 * @h: linked list of type listint_t to print
 *
 * Return: count on success.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
