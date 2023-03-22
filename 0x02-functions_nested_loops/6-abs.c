#include <stdio.h>
#include "main.h"

/**
 * _abs - entry point
 * @r: an input parameter
 * Description: computes the absolute value of an integer
 * Return: return absolute integer value
 */
int _abs(int r)
{
	
	if (r >= 0)
	{
		return (r);
	}
	else
		return (r * -1);
}
