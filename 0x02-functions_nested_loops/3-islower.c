#include "main.h"

/**
 * _islower - check for lowercase character.
 * @c: lowercase character parameter.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
