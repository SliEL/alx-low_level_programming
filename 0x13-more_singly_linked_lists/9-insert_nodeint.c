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
	listint_t *temp, *currentNode, *newNode;

	currentNode = *head;

	while (currentNode)
	{
		if (currentIndex == idx)
		{
			temp = currentNode->next;
			newNode->n = n;
			newNode->next = temp;
			currentNode->next = newNode;
			return (newNode);
		}

		currentIndex++;
		currentNode = currentNode->next;
	}

	return (NULL);
}
