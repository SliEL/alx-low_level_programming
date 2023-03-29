#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return: pointer (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{
		p++;
	}
	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
