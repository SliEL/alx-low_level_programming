#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum all value of the ll
 * @head: head of the ll
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
