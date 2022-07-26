#include "main.h"
/**
 * _isalpha -> checks for alphabetic characters
 * @c: The variable to print
 *
 * Return: 1 in case of lower or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
