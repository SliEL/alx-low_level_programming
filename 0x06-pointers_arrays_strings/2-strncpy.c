#include "main.h"
/**
 * _strncpy - copy n chars to dest
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *p = dest;

	while (i < n)
	{
		*p++ = *src++;
		i++;
	}
	*p = '\0';
	return (dest);
}
