#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: head of the ll
 * Return: number of nodes in the ll
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *currNode = head, *prev = NULL;

	while (currNode)
	{
		printf("[%p] %d\n", (void *)currNode, currNode->next);
		count++;

		if (currNode < prev)
		{
			fprintf(stderr, "Error: loop detected int the list\n");
			exit(98);
		}

		prev = currNode;
		currNode = currNode->next;
	}

	return (count);
}
