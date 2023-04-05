#include "main.h"
/**
 * _strlen_recursion - return len og a string
 * @s: pointer
 * Return: integer
 */
int _strlen_recusrion(char *s)
{
	int len = 0;
	
	if (!*s)
		return (len);
	len++;
	s++;
	_strlen_recursion(s);
}
