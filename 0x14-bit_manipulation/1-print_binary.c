/*
 * Auth: Joshua Adu-Mensah
 * File: 1-print_binary.c
 */

#include "main.h"
#include <math.h>


/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar((n & 1) + '0');
}
