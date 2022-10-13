#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: first number of parameter list
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int i;
	int sum = 0;

	va_start(para, n);

	for (i = 0; i < n; i++)
		sum += va_arg(para,  int);

	va_end(para);
	return (sum);
}
