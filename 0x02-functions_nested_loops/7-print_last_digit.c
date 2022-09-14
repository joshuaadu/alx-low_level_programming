#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer parameter.
 *
 * Return: last digit of number int.
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;

	ld = n % 10;

	if (ld < 0)
		ld = -ld;

	_putchar(ld + '0');

	return (ld);
}
