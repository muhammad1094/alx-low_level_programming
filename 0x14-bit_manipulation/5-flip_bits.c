#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits to flip to convert numbers
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
