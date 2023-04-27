#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add the node to the end of the ll
 * @head: pointer to the head of the ll
 * @str: node value
 * Return: address of new element or NULL.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len;
	list_t *temp = *head;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->next = NULL;
	newNode->str = strdup(str);
	newNode->len = len;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = newNode;

	return (newNode);

}
