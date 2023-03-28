#include "main.h"
/**
 * *_strcpy - copy string
 * @dest: pointer
 * @src: pointer
 * Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';

	return (dest);
}
