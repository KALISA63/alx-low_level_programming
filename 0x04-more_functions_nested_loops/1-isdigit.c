#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: integer argument
 *
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
