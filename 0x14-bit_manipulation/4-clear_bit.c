#include "main.h"

/**
 * clear_bit - clears the bit at the specified index
 * @n: pointer to the number
 * @index: index of the bit
 *
 * Return:1(success) or 0(failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear = 1;

	if (index > 32)
		return (-1);
	clear = clear << index;
	clear = ~clear;
	*n = (*n) & clear;
	return (1);
}
