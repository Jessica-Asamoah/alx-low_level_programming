#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer
 * @n: input integer
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
