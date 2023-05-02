#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse a ll
 * @head: head of the ll
 * Return: new head
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}

	*head = prev;

	return (prev);
}
