#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: Pointer to name to be printed
 * @f: Function to print name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
