/*
 * Auth: Joshua Adu-Mensah
 * File:
 */

#include "main.h"
#include <math.h>


/**
 * flip_bits - the number of bits you would need to flip
 * to get from one number to another
 * @m: number to flip to
 * @n: number
 * Return: the value of the bit at index index or
 * -1 if an error occured
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
