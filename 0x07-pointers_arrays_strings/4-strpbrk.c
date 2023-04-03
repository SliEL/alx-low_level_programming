#include "main.h"
/**
 * _strpbrk - search astring 
 * @s: pointer
 * @accept: pointer
 * Return: pointer
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while(*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
