#include "main.h"

/**
 * is_pal - checks if string is palimdrome
 * @s: string
 * @start: first index
 * @end: last index
 * Return: 0 or 1
 */

int is_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] == s[end])
		return (is_pal(s, start + 1, end - 1));
	else
		return (0);
}

/**
 * _strlen - returns len of a string
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - return 1 if string is palindrome and 0 if not
 * @s: string
 * Return: 1 if string is plindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	return (is_pal(s, 0, _strlen(s) - 1));
}
