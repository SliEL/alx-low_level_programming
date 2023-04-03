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
	char *p = s

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
