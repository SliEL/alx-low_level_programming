#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: head of the ll
 * @idx: index where to insert
 * @n: value of the new node;
 * Return: address of new node or NULL when failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int currentIndex = 0;
	listint_t *temp, *newNode, *nextNode;

	if (head == NULL)
		return (NULL);

	/* create the new Node */
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp)
	{
		if (currentIndex == idx)
		{
			nextNode = temp->next;
			newNode->next = nextNode;
			temp->next = newNode;
		}

		currentIndex++;
		temp = temp->next;
	}

	free(newNode);

	return (NULL);
}
