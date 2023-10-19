#include "main.h"

/**
 * flip_bits - Total of bits to be flipped
 * @n: Number 1
 * @m: Number 2
 * Return: occurance of a bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int counter = 0;

	while (xor > 0)
	{
		counter += xor & 1;
		xor >>= 1;
	}
	return (counter);
}
