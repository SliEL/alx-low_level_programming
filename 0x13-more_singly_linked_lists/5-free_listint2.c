#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free the ll
 * @head: pointer to the pointer of the head
 * Return: nothing - void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
