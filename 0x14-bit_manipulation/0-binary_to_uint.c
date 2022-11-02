/*
 * Auth: Joshua Adu-Mensah
 * File: 0-binary_to_uint.c
 */

#include "main.h"
#include <math.h>


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of the binary number
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, pow = 1;
	int len;

	if (!b)
	{
		return (0);
	}

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		dec += (b[len] - '0') * pow;

		pow *= 2;
	}

	return (dec);
}
