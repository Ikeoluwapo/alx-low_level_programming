#include <stdio.h>
#include "main.h"

/**
 * flip_bits - that returns the number of bits you would need to flip.
 * @n: first number
 * @m: second number
 *
 * Return: bitcount
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitcount;

	unsigned long int p;

	p = n ^ m;

	bitcount = 0;

	while (p)
	{
		bitcount += p & 1;
		p >>= 1;
	}
	return (bitcount);
}
