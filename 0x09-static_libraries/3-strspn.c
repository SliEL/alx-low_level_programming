#include "main.h"
/**
 * _strspn - Returns len of a prefix substring
 * @s:pointer
 * @accept: pointer
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int len = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
