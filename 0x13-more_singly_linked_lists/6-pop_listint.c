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
	listint_t *currentHead, *nextHead;

	currentHead = *head;
	nextHead = (*head)->next;
	head = nextHead;

	return (currentHead->n);
}
