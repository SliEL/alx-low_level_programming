#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s which consist only of bytes from accept
 * @s:pointer
 * @accept: pointer
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (len);
		}
	}
	return (len);
}
