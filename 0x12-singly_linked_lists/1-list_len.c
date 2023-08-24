#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns the number printed
 * list
 *
 * @h: pointer to the list_t list
 *
 * Return: number of elements in b
 */

size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
