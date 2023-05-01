#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free's the space occupied by the ll
 * @head: head of the ll
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}
}
