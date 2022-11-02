/*
 * Auth: Joshua Adu-Mensah
 * File: 1-print_binary.c
 */

#include "main.h"
#include <math.h>


/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: number
 * Return: the value of the bit at index index or
 * -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sb = 1;
	unsigned int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	for (i = 1; i <= index; i++)
	{
		sb = sb << 1;
	}
	*n &= ~sb;
	return (1);
}
