#include <stdlib.h>
#include "lists.h"

/**
 * size_t list_len - function that prints the len of the list
 * @h: pointer to the list
 * Return: len of the list of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
