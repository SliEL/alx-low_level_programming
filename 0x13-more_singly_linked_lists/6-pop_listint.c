#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of the ll
 * heaad -> first -> second -> ...
 * newHead = head->next
 * @head: head of the ll
 * Return: the value of the head node.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
		return (0);

	temp = *head;
	value = temp->n;
	*head = temp->next;
	free(temp);
	return (value);
}
