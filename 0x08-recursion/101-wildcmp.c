#include "main.h"

/**
 * wildcmp - checks if two strings are identical or not
 * @s1: pointer
 * @s2: pointer
 * Return: 1 or 0.
 */

int wildcmp(char *s1, char *s2)
{
	/* base case */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* if the current chars match in s1 nd s2 */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* if s2 is equal to * */
	if (*s2 == '*')
		return ((wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)) || wildcmp(s1 + 1, s2 + 1));

	/* if none of the cases above is true, strings don't match*/
	return (0);
}
