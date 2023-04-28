#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all nodes of the ll
 * @h: points to head of the ll
 * Return: returns the number of nodes of the ll
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
