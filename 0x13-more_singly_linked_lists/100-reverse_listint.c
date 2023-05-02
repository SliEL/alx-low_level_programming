#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse a ll
 * @head: head of the ll
 * Return: new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}

	*head = prev;

	return (*head);
}
