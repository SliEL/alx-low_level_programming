#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node from ll
 * 				from given index
 * @head: head of the ll
 * @inded: index of the node to delete
 * Return: 1 or -1;
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp)
	{
		if (i == index)
		{
			prev = temp;
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}

	return (-1);
}
