#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node- add a node to the end of the ll.
 * @head: pointer to the pointer to the head
 * @str: node value
 * Return: address of new element or NUll.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	/* calculate len of str */
	while (!new)
		return (NULL);
	/* insert new node in the beggining of the list*/
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
