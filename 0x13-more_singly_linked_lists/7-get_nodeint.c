#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of the ll
 * @head: head of the ll
 * @index: the index of the node to get
 * Return: node or NULL;
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int currentIndex = 0;
	listint_t *temp;

	temp = head;

	while (temp)
	{
		if (currentIndex == index)
			return (temp);

		temp = temp->next;
		currentIndex++;
	}

	return (NULL);
}
