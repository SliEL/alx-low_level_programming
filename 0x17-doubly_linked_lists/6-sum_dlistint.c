#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the nodes (n)
 * of a dll
 *
 * @head: head of the dll
 * Return: sum of the nodes
 */
int total_dlistint(dlistint_t *head)
{
	int total;

	total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}