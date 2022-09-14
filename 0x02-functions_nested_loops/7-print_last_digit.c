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
	
	ld = n % 10;
	_putchar(ld);

	return (ld);
}
