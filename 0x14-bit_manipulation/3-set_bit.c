#include "main.h"

/**
 * set_bit - Function that sets value of a bit to 1
 * at a given index
 * @n: Pointer to the number
 * @index: The index
 *
 * Return: 1(success) or -1(failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int or = 1;

	if (index > 32)
		return (-1);
	or = or << index;
	*n = (*n) | or;
	return (1);
}
