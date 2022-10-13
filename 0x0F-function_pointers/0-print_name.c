#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: funtion pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
