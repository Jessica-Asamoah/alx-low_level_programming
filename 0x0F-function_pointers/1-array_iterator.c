#include <stdlib.h>

/**
 * array_iterator - Function that executes a function given as a
 * parameter on each element of an array
 * @array: Pointer to array
 * @size: Array size
 * @action: function to iterate throw array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
