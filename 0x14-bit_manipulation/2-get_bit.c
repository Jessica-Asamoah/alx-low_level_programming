#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: Number
 * @index: the index of the bit
 *
 * Return: Bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (index > 32)
		return (-1);
	bit = (n >> index);
	return (bit & 1);
}
