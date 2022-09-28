#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to check length
 *
 * Return: length of string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	else
		return (0);
}
