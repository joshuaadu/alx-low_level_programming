#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c =< 'Z' && c >= 'A')
		return (1);
	return (0);
}
