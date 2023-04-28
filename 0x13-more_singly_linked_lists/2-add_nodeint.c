#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add new node to start of ll
 * @head: head of the ll
 * @n: value of the new node to add
 * Return: address of the new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	while (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	*head = newNode;

	return (*head);
}
