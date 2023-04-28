#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the num of nodes in the ll
 * @h: points to the head of the ll
 * Return: num of nodes in the ll
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
