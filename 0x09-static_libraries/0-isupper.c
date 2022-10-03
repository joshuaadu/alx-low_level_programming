#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: the character to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
