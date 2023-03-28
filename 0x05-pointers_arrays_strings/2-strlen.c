#include "main.h"
/**
 * _strlen - return the len of a string
 * @s: pointer
 * Return: integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
