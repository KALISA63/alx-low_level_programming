#include "main.h"

/**
 * _abs -> computes the absolute value of an integer
 * @c: the variable used
 *
 * Return: 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
