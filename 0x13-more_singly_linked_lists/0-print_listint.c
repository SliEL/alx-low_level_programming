#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all nodes of the ll
 * @h: points to head of the ll
 * Return: returns the number of nodes of the ll
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
