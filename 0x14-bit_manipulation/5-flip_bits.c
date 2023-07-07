#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * you would need to flip to get from one num to another
 * @n: Initial number
 * @m: Second number
 *
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int rem = n ^ m;

	while (rem != 0)
	{
		if ((rem & 1) == 1)
			count++;
		rem = rem >> 1;
	}
	return (count);
}
