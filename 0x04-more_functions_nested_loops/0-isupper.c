#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	return (c =< 'Z' && c >= 'A');
}
