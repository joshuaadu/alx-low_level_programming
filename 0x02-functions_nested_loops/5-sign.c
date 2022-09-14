#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: integer number.
 *
 * Return: Always 0 or 1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
