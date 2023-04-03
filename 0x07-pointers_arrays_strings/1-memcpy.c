#include "main.h"
/**
 * char _memcpy - copy memory area
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n-- > 0)
	{
		*p++ = *src;
	}
	*p = '\0';
	return (dest);
}
