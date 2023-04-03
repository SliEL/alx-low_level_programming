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
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
