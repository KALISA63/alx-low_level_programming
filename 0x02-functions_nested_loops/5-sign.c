#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The variable to be printed
 *
 * Return: 1 and prints "+" if n is positive, 0 and prints "-" if n
 * is 0 and -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('.');
		return (2);
	}
}
