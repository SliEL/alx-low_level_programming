#include "main.h"
/**
 * _isalpha - function to check for alpha chars
 * @c: int argument
 * Return: 1 if alpha and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
