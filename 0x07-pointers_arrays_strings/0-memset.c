#include "main.h"
/**
 * _memset - fill n byte with const
 * @s: pointer
 * @b: char
 * @n: integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (s);
}
